#include<stdio.h>

int main()
{
	int a=10 , *ptr ;
	ptr=&a;  //1. Print adress of variable
	printf("Adress of a is %p",ptr);
	//3. Print value and address of variable
	printf("\nValue and address of a is %d and %p",*ptr,ptr);
	return 0;
	
}
