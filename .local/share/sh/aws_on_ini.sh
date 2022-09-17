#!/usr/bin/bash

root="$(dirname "$0")"

"$root/is_aws_pathed.sh"

cd ./.local/share/ || return
mkdir -p conf
mkdir -p infra
cd infra || exit

cat <<EOF >/./.local/conf/localrc.conf
[[local|localrc]]
ENVIRONMENT=test
DEBUG=true
ADMIN_PASSWORD=ESTURiAS:4Mstel_1830bo
DATABASE_PASSWORD=$ADMIN_PASSWORD
EOF

if (is_in_path "$@"); then
  echo "aws_cliv2 is already in PATH"
  return 1
fi

# ^AWS CLI v2 :: Configurations:=
aws configure import --csv file://credentials.csv
# to check our AWS configuration:
aws configure list
aws configure list-profiles
aws ec2 describe-instances --profile default
aws s3 ls --profile default # check if it worked or not
# check what EC2 instances of AMI we can use in our region of choice:
aws ec2 describe-instances --output table --region us-east-1

# *Setup AWS Config :: S3:=
check_if_bucket_exists() {
  mycmd=$?
  is_bucket_name=$1
  aws s3api head-bucket \
    --bucket "$is_bucket_name" \
    >/dev/null 2>&1

  if [[ "$mycmd" -eq 0 ]]; then
    return 0
  else
    return 1
  fi
}

if (check_if_bucket_exists "$@"); then
  echo "Bucket already exists within '/dev/null/'"
  return 1
fi

if [[ $mycmd -ne 1 ]]; then
  echo "Bucket has failed to be created"
  return 1
fi

terraform apply -target main.tf

# &Setup AWS Config :: DynamoDB:=
aws dynamodb create-table \
  --table-name rmit-locktable-notes \
  --attribute-definitions AttributeName=UserID,AttributeType=S AttributeName=UserInfo,AttributeType=S \
  --key-schema AttributeName=UserID,KeyType=HASH AttributeName=UserInfo,KeyType=RANGE \
  --provisioned-throughput ReadCapacityUnits=1,WriteCapacityUnits=1
