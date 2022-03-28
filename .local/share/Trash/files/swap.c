#include<stdio.h>

void swap(int x, int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("Swapped numbers a= %d and b =%d",x,y);
}
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	swap(a,b);
	return 0;
}


