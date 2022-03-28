#!/bin/bash
cmd() {
	var=$1
	echo "The name of script is $0" 
	echo "First argument is $1"
	echo "Second argument is $2"
	echo "Total number of arg passed are $#"
	echo "Value of arguments are $*"
	echo "Value of arguments are $@"
}
echo "Function call"
cmd city
echo " Giving call second time"
cmd city kia nexa bmw

