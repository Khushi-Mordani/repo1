#include<stdio.h>

int main()
{
	int index,n,m,pattern,ba,i,j;
	//1. Calculate address of given element in 1D array
	printf("Enter index and base address :");
	scanf("%d  %d",&index,&ba);
	printf("Address of %d th element in 1D array is : %d\n",index,(ba + (4*(index-1))));
	//2. Calculate address of given element in 2D array
	printf("Enter total number of rows and columns :");
	scanf("%d %d",&n,&m);
	printf("\nEnter row&column of element,base address and storing pattern. For storing pattern, 1 for row major and 0 for column major :");
	scanf("%d %d %d %d",&i,&j,&ba,&pattern);
	if (pattern)
	{
	printf("Address of [%d,%d] element id %d \n",i,j,ba + 4*((i-1)*m +j-1));
	}
	else 
	{
	printf("Address of [%d,%d] element id %d \n",i,j,ba + 4*((j-1)*n +i-1));
	}
	return 0;
}



