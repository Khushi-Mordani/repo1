#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a;
	a=(int *)malloc(sizeof(int));
	printf("memory allocated at %p",a);
	printf("\ninital value of a is %d",*a);
	printf("\nsize : %d",sizeof(a));
	*a = 10;
	printf("\na is %d",*a);
	free(a);
}
