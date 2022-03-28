//Khushi Mordani
//5.Write a program, where functions of the program are called in the reverse order of their function calls from main().

#include<stdio.h>
#include<stdlib.h>

void callBack1()
{
	printf("callback 1\n");
}
void callBack2()
{
	printf("callback 2\n");
}
void callBack3()
{
	printf("callback 3\n");
}

int main()
{
	printf("registering callback1\n");
	atexit(callBack1);
	printf("registering callback2\n");
	atexit(callBack2);
	printf("registering callback3\n");
	atexit(callBack3);
	printf("exit() main exiting now...\n");
	exit(0); //_exit() is not calling the functions which are previously registered using atexit function
}
