#!/bin/bash

read -p "Enter a number:" num
for i in {1..10}
do
	n=$((num*i))
	echo "$num*$i= $n"
done
	
