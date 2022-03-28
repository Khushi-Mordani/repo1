#include<stdio.h>

int sinterest(int,int,int);
int main()
{
	int p,n,r,a,b;
	float intr;
	printf("Enter the principle amount,number of years and rate of interest:");
	scanf("%d %d %d",&p,&n,&r);
	intr = sinterest(p,n,r);
	printf("Interest = %f",intr);
	return 0;
}

int sinterest(int x,int y,int z)
{
	float interest;
	interest = x*y*z /100;
	return interest;
}

