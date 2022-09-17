#!/usr/bin/bash

is_in_path() {
	aws=$1 our_path=$2 result=1
	old_IFS=$IFS IFS=":"

	for directory in $our_path
  do
    if [ -x "$directory"/"$aws" ]; then
      result=0
    fi
  done

	IFS=$old_IFS 
	return $result
}
