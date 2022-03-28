#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int x;
	char buff_comm[5];
	strcpy(buff_comm,"ls -l");
	printf("system() library function uses fork() to create a child process\n");
	printf("Child process executes execl() which loads and runs new program provided by system() argument\n");
	x = system(buff_comm);
	printf("Returned:%d",x);
	return 0;
}
