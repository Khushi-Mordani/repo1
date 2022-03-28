#include<stdio.h>
#include<string.h>

int main()
{
	char a[10],b[10];
	printf("Enter a:");
	gets(a);
	printf("Enter b:");
	gets(b);
	printf("Copied string : %s \n",strcpy(a,b)); //task1:string copy
	int counte=0,counto=0;
	//task2:count number of odd even elements
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]%2==0)
		{
			counte++;
		}
		else
		{
			counto++;
		}
	}
	printf("Number of odd elements in a: %d \n NUmber of even elements in a : %d",counto,counte);
	//task3:reverse the string
	printf("Reverse string b :");
	for(int i=strlen(b);i>=0;i--)
	{
		printf("%d \n",b[i]);
	}
	return 0;
}
