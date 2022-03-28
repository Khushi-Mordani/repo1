#include<stdio.h>

#include"stack1.h"

int main()
{
	int n=3;
	int s[n],top=0;
	int x;
	int op;
	int i;
	while(1)
	{
		printf("1.Push\n2.Pop\n3.Peep\n4.Change\n5.Quit\nEnter operation:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				printf("\nEnter element to push :");
				scanf("%d",&x);
				push(s,&top,x,n);	
				printf("Element pushed!");		
				break;
			case 2:
				printf("\nElement on top is %d",pop(s,&top));
				break;
			case 3:
				printf("\nEnter position :");
				scanf("%d",&i);
				printf("\nElement at %d position is %d",i,peep(s,&top,i));
				break;
			case 4:
				printf("\nEnter position and value to be updated :");
				scanf("%d %d",&i,&x); break;
			case 5:
				printf("\nThankyou");
				
		}
		if (op==5)
			break;
	}
	/*for(int i=n;i>=1;i--)
	{
		printf("%d ",s[i]);
	}*/
	while(1)
	{
		int p=pop(s,&top);
		if (p!=0)
			printf("%d ",p);
		else
			break;
	}
		
	return 0;
}


