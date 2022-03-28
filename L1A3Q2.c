//Khushi Mordani
//2.Write a program where thread cancel itself.(use pthread_cancel())
#include<pthread.h>
#include<stdio.h>
#include<unistd.h>

void *hello(void *threadid)
{
	printf("Hello,I am Khushi!!\n");
	while(1);{}
}

int main()
{
	pthread_t t1;
	int rc, t=0;
	printf("Creating thread\n");
	rc = pthread_create(&t1,NULL,hello,NULL);
	printf("thread id: %lu\n",t1);
	sleep(5);
	rc = pthread_cancel(t1);
	if(t==0)
	{
		printf("Thread cancelled!\n");
		printf("thread id: %lu\n",t1);
	}
	return 0;
}
