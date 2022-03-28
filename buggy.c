//buggy code
//Malloc allocates more space than actually requested

#include<stdio.h>
#include<stdlib.h>

void buggy()
{
	int *intptr;
	int i;
	intptr = (int *)malloc(sizeof(int)*5);
	printf("Malloc checking:Addr=%08x ans size=%d\n",intptr,sizeof(int)*5);
	for(int i=0;i<14;i++) //upper boundary memory violation
	{
		*intptr = 100;
		printf("Value at ptr intptr=%d\n",(*intptr));
		intptr++;
	}
}

int main()
{
	buggy();
	return 0;
}
