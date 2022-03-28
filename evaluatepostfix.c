#include<stdio.h>
#include<ctype.h>
#include"stack1.h"

int operation(int a,int b,char op)
{
	switch(op)
	{
		case '+':
			return a+b; break;
		case '-':
			return a-b; break;
		case '*':
			return a*b; break;
		case '/':
			return a/b; break;
	}
}

int main()
{
	char in[20],out[20],s[20];
	int n=20,top=0;
	printf("Enter the expression:");
	scanf("%s", in);
	int i=0,j=0;
	while(in[i]!='\0')
	{
		if(isdigit(in[i]))
		{
			printf("\nDigit is %c",in[i]);
			push(s,&top,in[i],n);
		}
		else
		{
			int b=(int)pop(s,&top)-'0';
			int a=(int)pop(s,&top)-'0';
			char c=(char)(operation(a,b,(in[i]+'0'));
			printf("\nResult is %c",c);
			push(s,&top,c,n);
		}
		i++;
	}
	printf("%s",out);
	return 0;
}

