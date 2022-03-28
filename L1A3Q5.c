//Khushi Mordani
//5.Write a program that implements threads synchronization using mutex techniques.

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>

int sharedvar=87;

pthread_mutex_t my_mutex; //create mutex
void *thread_add(void *arg)
{
	pthread_mutex_lock(&my_mutex); //take mutex
	int n;
	printf("Enter a number to add:\n");
	scanf("%d",&n);
	sharedvar=sharedvar+n;
	printf("After addition,shared variable is %d\n",sharedvar);
	pthread_mutex_unlock(&my_mutex);	//release mutex
}

void *thread_sub(void *arg)
{
	pthread_mutex_lock(&my_mutex);	//take mutex
	int i;
	printf("Enter a number to subtract:");
	scanf("%d",&i);
	sharedvar=sharedvar-i;
	printf("After subtraction,shared variable is %d\n",sharedvar);
	pthread_mutex_unlock(&my_mutex);	//release semaphore
}

int main()
{
	pthread_t thread1,thread2;
	pthread_mutex_init(&my_mutex,NULL);
	pthread_create(&thread1,NULL,thread_add,NULL);
	pthread_create(&thread2,NULL,thread_sub,NULL);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);
	printf("Shared variable final value = %d\n",sharedvar);
	return 0;
}
