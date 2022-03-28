#include<stdio.h>

int main()
{
	int a[10],value;
	printf("Enter 10 elements of array :");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter value : ");
	scanf("%d",&value);
	int flag=0;
	for(int i=0;i<10;i++)
	{
		if(value==a[i])
		{
			printf("Index: %d",i);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("Value does not exist in the array.");
	}
	return 0;
}

