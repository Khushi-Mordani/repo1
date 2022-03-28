#!/bin/bash
#variable scope
scope(){
	local var=$1
	echo "Within the function the value of var is $var";
}
var=outside
echo "Before calling the function value of var is $var"
scope local
echo "After function call value of var is $var"

