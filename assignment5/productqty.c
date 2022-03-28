#include<stdio.h>

int main()
{
	int A[3][2];
	printf("Enter product number and number of units:");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%d ",&A[i][j]);
		}
	}
printf("Result matrix : \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
	int tot_amt=0;
for(int i=0;i<3;i++)
{
	switch(A[i][0])
{
	case 1 : 
		tot_amt+=29.5*A[i][1];
		break;
	case 2 : 
		tot_amt+=45.0*A[i][1];
		break;
	case 3 : 
		tot_amt+=49.0*A[i][1];
		break;
	case 4 : 
		tot_amt+=95.5*A[i][1];
		break;
	case 5 : 
		tot_amt+=68.5*A[i][1];
		break;
}
}
	printf("Total amount : %d",tot_amt);
	return 0;
}

