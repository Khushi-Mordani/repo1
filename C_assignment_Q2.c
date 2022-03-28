#include<stdio.h>

int calc(int m1, int m2, int m3)
{
	float t,p;
	printf("Enter the marks out of 100 :");
	scanf("%d%d%d",&m1,&m2,&m3);
	t = m1 + m2 + m3;
	p = t / 3;
	return t;
}
int main()
{
	int m1,m2,m3;
	float total,per;
	total = calc(m1,m2,m3);
	per = total/3;
	printf("\nTotal marks: %f\nPercentage: %f",total,per);
	return 0;
}

