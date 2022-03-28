#include<stdio.h>

void swap(int *a1,int *a2) 
{
	int temp;
	temp=*a1;
	*a1=*a2;
	*a2=temp;
}


int main()
{
	int a,b,*ptr1,*ptr2,result;
	printf("Enter two numbers :");
	scanf("%d %d",&a,&b);
	swap(&a,&b); //2.Swap two elements
	printf("\nValues after swapping a=%d b=%d",a,b);
	//4.Sum of variables
	ptr1=&a;
	ptr2=&b;
	result = *ptr1 + *ptr2;
	printf("\nSum is %d",result);
	
	return 0;
}
