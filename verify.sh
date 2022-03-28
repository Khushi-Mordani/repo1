#!/bin/bash
#This script is to check whether the number is positive or not

read -p "Enter the number:" i
if test "$i">0
then
	echo "Positive number"
else
	echo "Negative number" 
fi
