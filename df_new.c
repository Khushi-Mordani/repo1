//buggy code
//Malloc allocates more space than actually requested

#include<stdio.h>
#include<stdlib.h>

void buggy(int *p)
{
	p[0]=10;
	free(p);
}

int main()
{
	/*int *ptr;
	ptr = (int *)malloc(4);
	buggy(ptr);
	//free(ptr);	//freeing up a pointer which is already freed up */
	int *ptr1;
	//*ptr1 = NULL;
	printf("Address of pointer:%d",&ptr1); //freeing up a null pointer , uninitialized pointer
	free(ptr1);
	printf("Freed up!");
	return 0;
}
