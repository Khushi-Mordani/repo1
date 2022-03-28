#include<stdio.h>

int enqueue(int q[],int f,int r,int n,int y)
{
	if (f==0)
		f=f+1;
	if (r>=n)
	{	printf("Queue Overflow");
		return 1;}
	else
	{
		r=r+1;
		printf("Enter the element to be inserted :");
		scanf("%d",&y);
		q[r]=y;
		printf("Element inserted");
		return 0;
	}
	//display(q[n],f,r);
}
int dequeue(int q[],int f,int r)
{
	int y;
	if (f==0)
		printf("Queue underflow");
	else
	{
		y=q[f];
		printf("Element deleted.");
		if(f==r)
		{
			f=0;
			r=0;
		}
		else
			f=f+1;
	}
	//printf("%s",q);
}

int display(int q[],int f,int r)
{
	for (int i=f;i<r;i++)
	{
		printf("%d",q[i]);
	}
}

int main()
{
	int front,rear,size,element;
	printf("Enter the size :");
	scanf("%d",&size);
	int queue[5];
	printf("Front and rear pointer : ");
	scanf("%d %d",&front,&rear);
	enqueue(queue,front,rear,size,element);
	//display(queue,front,rear);
	dequeue(queue,front,rear);
	
	return 0;
}
