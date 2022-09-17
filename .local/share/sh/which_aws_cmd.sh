#!/usr/bin/bash
#  Author: boybulbousbemperor
cliv2_cmd_test() {
	local result response
	aws=$1 # function parameter 1
	args=$2 # function parameter 2
	err_code="$($aws&$args)"
	err=$?
	regex=$("$response" || grep "$result") 

	response="$($args)" # in double-quoted parentheses for argument/expression

	if [[ -z "$3" ]]; then 
		result="$3"; 
	else
		result="$?"; 
	fi

	if [[ "$err_code" -ne "$err" ]]; then
        "$aws"
		"$args"
    fi

	if [[ -n "$result" ]]; then
		"$regex"
		if [[ -z "$regex" ]]; then
			# "$args"
			"$response"
		fi
	fi

	return $result
}