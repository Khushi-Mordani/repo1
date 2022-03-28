#include<stdio.h>

int main()
{
	int num1,p=0;
	printf("Enter a number :");
	scanf("%d",&num1);
	if(num1==0||num1==1)
	{
		printf("Neither prime nor composite.");
	}
	for(int i=2;i<num1/2;i++)
	{
		if(num1%i==0)
		{
			p=1;
			printf("Number is not prime.");
			break;
		}
	}
	if(p=0)
	{
		printf("Number is prime.");
	}
	return 0;
}
	
