#!/bin/bash
#use of funcname

backup() {
	local d=$1
	[ -f "$d" ] && { echo "$1 is a file"; exit 0; }
	[ -d "$d" ] && {  echo "$d is directory"; exit 0; }
	[ ! -d $d ] && { echo "$FUNCNAME(): directory does not exist"; exit 1;}
}
#echo "Backup started"
backup $1
echo "Checked"



