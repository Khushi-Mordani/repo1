#include<stdio.h>

int sumn(int n)
{
	int sum =0;
	for(int i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum;
}
int main()
{
	int num,sum;
	printf("Enter the number you want to sum upto :");
	scanf("%d", &num);	
	sum = sumn(num);
	printf("Sum = %d",sum);
	swap(num,sum);
	return 0;
}
