#include<stdio.h>

int enqueue(char *q,int *f,int *r,int n,int y)
{
	if (*f==0)
		*f=*f+1;
	if (*r>=n)
	{
		printf("\nQueue overflow");
	}	
	else
	{
		*r=*r+1;
		printf("\nEnter the element to be inserted:");
		scanf("%d",&y);
		q[*r]=y;
		printf("\nElement inserted");
	}
	
	
	
}
int dequeue(char *q,int *f,int *r)
{
	int y;
	
	if (*f==0)
		printf("\nQueue underflow");
	else
	{
		y=q[*f];
		printf("\nElement deleted.");
		if(*f==*r)
		{
			*f=0;
			*r=0;
		}
		else
			*f=*f+1;
	}
		
}
int main()
{
	int *f,*r,n,y;
	printf("Enter size of queue:");
	scanf("%d",&n);
	char q[n];
	printf("Enter front and rear pointer :");
	scanf("%d %d",f,r);
	enqueue(q,&f,&r,n,y);
	enqueue(q,&f,&r,n,y);
	dequeue(q,&f,&r);
	return 0;
}
