#include <stdio.h>
int main()
{
	int i,j,n,key=0;
	printf("Enter the size of array \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the matrix: \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=1;i<n;i++)
    {
    	key=arr[i];
    	j=i-1;
    	
    	while(j>=0 && arr[j]>key)
    	{
    		arr[j+1]=arr[j];
    		j--;
		}
		arr[j+1]=key;
	}
	
	printf("The sorted array is: \n");
	for (i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }

}
