//Khushi Mordani
//5.Write a program parent process wait untill ,while child process open a file and read file data into empty buffer.

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int pid;
	char read_buf[100];
	pid=fork();
	if(pid==0)
	{
		//child process
		printf("Child process is running \n");
		int fd;
		fd = open("readfile.c",O_RDONLY);
		read(fd,read_buf,100);
		printf("%s",read_buf);
		//it will read data from the readfile and it will print on display
		printf("Child process stopped...!\n\n");
	}
	else
	{
		wait(0);//parent will wait till child execute
		//sleep(5);
		printf("Parent running\n");
		printf("Parent Process Stopped...!\n");
	}
	return 0;
}
