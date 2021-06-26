#include <stdio.h>
int main()
{
	int i,j,n,gap;
	printf("Enter the size of array \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the matrix: \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(gap=n/2;gap>0;gap/=2)
	{
		for(i=gap;i<n;i++)
		{
			int temp=arr[i];
			for(j=i; j>=gap && arr[j-gap]>temp;j-=gap)
			{
				arr[j]=arr[j-gap];
			}
			arr[j]=temp;
		}
	}
    
	printf("The sorted array is: \n");
	for (i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }

}
