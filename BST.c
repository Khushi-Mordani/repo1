// C program to implement recursive Binary Search
#include <stdio.h>

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle itself
        if (arr[mid] == x)
        {
              printf("Element found at the mid index in array...");
              printarray(arr, l,r);
              return mid;
        }


        // element is smaller than mid, then-->it can only be present in left sub array
        if (arr[mid] > x)
        {
              printf("As %d > %d new problem is to find %d in array....",arr[mid],x,x);
		 printarray(arr, l,mid - 1);
              return binarySearch(arr, l, mid - 1, x);

        }

        // Else element is larger than mid -->it can only be present in right sub array
        printf("As %d < %d new problem is to find %d in array....",arr[mid],x,x);
        printarray(arr, mid + 1,r);
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

void printarray(int arr[], int l, int r)
{
    int i;
    for(i = l; i <= r; i++)
    {
        printf("%d ", arr[i]);
        //scanf("%d\n", &arr[i]);
    }

    printf("\n---------------------------------------\n");
}

void main(void)
{
    //int arr[] = { 6, 7, 5, 2, 3, 4, 10, 40 };

    int n;
	printf("Enter the no. of elements:- ");
	scanf("%d", &n);
	int arr[n],i;
	for(i = 0; i < n; i++)
    {
        printf("Enter the element:-  ");
        scanf("%d", &arr[i]);
    }
   //printarray(arr,0,n);

    //int n = sizeof(arr) / sizeof(arr[0]);
    printf("Entered array: ");
    printarray(arr,0,n-1);
    //int x = 10;
    int x;

    printf("Enter number to be searched ");
    scanf("%d",&x);
    printf("---------------------------------------\n");

    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present in array")
                   : printf("Element is present at index %d",
                            result);
}
