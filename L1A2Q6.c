//Khushi Mordani
//6. Write a program child executes(exec()) a new program , while parent waits for child task to get complete.

#include<stdio.h>
#include<unistd.h>

int main()
{
	int pid;
	pid=fork();
	if(pid==0)
	{
		//child process
		printf("Child process is running \n");
		int ret = execl("/home/ompatel/Linux_Internals/10-03-22/Asignment/6","",NULL);
		//5 file will execute
	}
	else
	{
		wait(2);//parent will wait till child execute
		//sleep(5);
		printf("Parent running\n");
		printf("Parent Process Stopped...!\n");
	}
	return 0;
}
