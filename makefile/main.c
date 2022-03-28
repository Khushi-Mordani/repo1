#include<stdio.h>
#include"calc_mean.h"

int main(int argc,char *argv[])
{
	double v1,v2,m1,m2;
	printf("Enter two numbers:");
	scanf("%3.3f %3.3f",&v1,&v2);
	m1 = mean(v1,v2);
	m2 = sub(v1,v2);
	printf("The mean of %3.3f and %3.2f is %3.2f\n",v1,v2,m1);
	printf("The substraction of %3.3f and %3.2f is %3.2f\n",v1,v2,m2);
	return 0;
}
