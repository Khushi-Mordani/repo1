//Khushi Mordani
//2.Write a program such that parent process create two child processes,such that each child executes a separate task.

#include <stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	pid_t q,q_child;
	q = fork();
	if(q==0)
	{
		//wait(NULL);
		printf("Child process id: %d\n",getpid());
		printf("Parent process id: %d\n",getppid());
		execlp("vim", "vim", NULL);
		q_child=fork();
		if(q_child==0)
		{
			printf("Grandchild process id: %d\n",getpid());
			execlp("ls","-a","-s",NULL);
		}
	}
	else
	{
		//wait(NULL);
		printf("Parent process id: %d\n",getpid());
		printf("Child process id: %d\n",q);
	}
	return 0;
}
