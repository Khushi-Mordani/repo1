#include<stdio.h>


void sort_array(int n, int* arr)
{
	int i, j, temp;	

	for (i=0;i<n;i++)
	{
		for (j=i+1; j<n;j++)
		{
			if(*(arr+j) < *(arr+i))
			{
				temp=*(arr + i);
				*(arr+i)=*(arr+j);
				*(arr+j)=temp;
			}			
		}
	}
	printf("Sorted Array:\n");
	for(i=0; i<n;i++){
		printf("%d\n",*(arr+i));
	}	
}

int main()
{
	int n;
	printf("Enter number of elements :");
	scanf("%d", &n);
	int arr[n];
	printf("\nEnter elements of array :");
	for (int i=0; i<n;i++){
		scanf("%d", &arr[i]);
    }  	
	sort_array(n, arr);   
	printf("\n");	
}
