#include <stdio.h>
#include <stdlib.h>
int Linearsearch(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
    // We reach here when element is not
    // present in array
    return -1;
}

int main(void)
{
	int n,x,ch,i,r1=0,r2=0;
    printf("Enter the size of array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array: \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter 1 to perform Linear search on the list \n" );
    printf("Enter 2 to perform Binary search on the list \n" );
    scanf("%d",&ch);
    printf("Enter the element to be searched \n");
    scanf("%d",&x);
    switch (ch)
     {
      case 1:
      // Function call
     r1=Linearsearch(arr, n, x);
     (r1==-1)
       ? printf("Element is not present in array")
       : printf("Element is present at index %d", r1);
       break;
       case 2:
       // Function call
      r2=binarySearch(arr,0,n-1,x);
      (r2==-1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", r2);
        break;
        default:
        printf("Invalid choice \n" );
    }
    return 0;
}
