#!/bin/bash +x

path=/etc/passwd

userexist() {
	read -p "Enter the user name:" name
	grep "^$name" $path>/dev/null
	status=$?
	if test $status -eq 0
	then 
		echo "User exists";
	else
		echo "User does not exist";
	fi
}

userexist

