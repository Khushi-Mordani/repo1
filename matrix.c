#include<stdio.h>

int main()
{
	int n,m;
	printf("Enter number of rows and columns :");
	scanf("%d %d",&n,&m);
	int mat1[n][m],mat2[n][m],result[n][m],mul[n][m];
	printf("Enter elements of 1st matrix :");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter elements of 2nd matrix :");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("Matrix 1 :\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",mat1[i][j]);
		}
		printf("\n");
	}
	printf("Matrix 2 :\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",mat2[i][j]);
		}
		printf("\n");
	}
	int sum =0; // sum check
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			result[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	printf("Result matrix : \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}
	int min=mat1[0][0]; //Minimum element check
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(mat1[i][j]<min)
			{
				min=mat1[i][j];
			}
		}
	}
	printf("Smallest element in first matrix is : %d \n",min);
	// Multiplication check
	int product;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			product=0;
			for(int k=0;k<n;k++)
			{
				product+=mat1[i][k]*mat2[k][j];
			}
			mul[i][j]=product;
		}
	}
	printf("Product matrix : \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",mul[i][j]);
		}
		printf("\n");
	}
	// Determinant check
	int det;
	det = mat1[0][0]*((mat1[1][1]*mat1[2][2])-(mat1[2][1]*mat1[1][2])) -mat1[0][1] * (mat1[1][0]*mat1[2][2] - mat1[2][0] * mat1[1][2]) + mat1[0][2] * (mat1[1][0]*mat1[2][1]-mat1[2][0]*mat1[1][1]);
	printf("Determinant of matrix 1 is : %d",det);

	return 0;
	
}

