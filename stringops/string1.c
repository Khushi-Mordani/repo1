#include<stdio.h>

int main()
{
	int r,c;
	printf("Enter number of rows and columns :");
	scanf("%d %d",&r,&c);
	int mat[r][c];
	printf("\nEnter elements of matrix:");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	int cn=0,cp=0,c0=0;
	printf("Given matrix : \n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d",mat[i][j]);
			if(mat[i][j]<0)
				cn++;
			else if(mat[i][j]>0)
				cp++;
			else
				c0++;
		}
		printf("\n");
	}
	printf("Negative elements : %d Positive elements : %d Zero elements : %d",cn,cp,c0);
}
