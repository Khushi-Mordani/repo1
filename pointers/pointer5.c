#include<stdio.h>

int main()
{
	int array[10],i,n;
	int sum=0 , *ptr;
	printf("Number of elements :");
	scanf("%d",&n);
	printf("Enter elements of array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	ptr=array;
	for(i=0;i<n;i++)
	{
		sum+=*ptr;
		ptr++;
	}
	printf("\nSum is %d",sum);
	
}

