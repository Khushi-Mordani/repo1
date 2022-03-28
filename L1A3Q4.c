//Khushi Mordani
//4. Write a program where pthread task displays the thread id and also prints the calling process pid.

#include<pthread.h>
#include<stdio.h>
pthread_t thread_id;
void *thread_func(void *arg)
{
	pid_t pid;
	pthread_t thread_id;
	pid=getpid();
	thread_id=pthread_self();
	printf("Process id: %u Thread id:%u \n",(unsigned int)pid,(unsigned int)thread_id);
	return 0;
}

int main(void)
{
	int create;
	create=pthread_create(&thread_id,NULL,thread_func,NULL);
	if(create!=0)
	printf("Cannot create thread: %s\n",strerror(create));
	while(1);
	exit(0);
}
