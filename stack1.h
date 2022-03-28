int push(int a[], int *t,int e,int n)
{
	if(*t<n)
	{
		*t=*t+1;
		a[*t]=e;
		printf("\nTop is %d",*t);
		return 1;
	}
	else
	{
		printf("\nStack Overflow");
		return 0;
	}
}

int pop(int a[], int *t)
{
	if(*t==0)
	{
		printf("\nStack underflow");
		return 0;
	}
	else
	{
		*t=*t-1;
		return a[*t+1];
	}
}

int peep(int a[],int *t,int i)
{
	if(*t-i+1<=0)
	{
		printf("Stack Underflow");
		return 0;
	}
	else
		return a[*t-i+1];	
}
int change(int a[],int *t,int i,int x)
{
	if(*t-i+1<=0)
	{
		printf("Stack Underflow");
		return 0;
	}
	else
		a[*t-i+1]=x;
		return 1;
}
