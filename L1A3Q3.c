//Khushi Mordani
//3. Write a program that changes the default properties of newly created posix threads.(ex: to change default pthread stack size )
#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/mman.h>

void* change(void* par)
{
	sleep(2);
	return 0;
}

int main()
{
	pthread_attr_t Attr;
	pthread_t id;
	void *stack;
	size_t siz;
	int err;
	size_t my_stacksize = 0x30000000;
	void * my_stack;
	
	pthread_attr_init(&Attr);

	pthread_attr_getstacksize(&Attr, &siz);
	pthread_attr_getstackaddr(&Attr, &stack);
	
	printf("Default address: %08x Default size: %d\n",stack,siz);
	
	my_stack = (void*)malloc(my_stacksize);
	
	pthread_attr_setstack(&Attr,my_stack,my_stacksize);
	pthread_create(&id,&Attr,change,NULL);
	pthread_attr_getstack(&Attr,&stack,&siz);
	printf("Newly derived stack address:%08x and size:%d\n",stack,siz);
	sleep(2);
	exit(0);
}
