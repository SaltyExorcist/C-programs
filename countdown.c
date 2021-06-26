#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("Enter the size of array \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the matrix: \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]); //storing elements in the array
    }

for(i=0;i<n;i++)
{
	if(arr[i]==3) //checking if the element in the array is 3, if yes then checking if the next two elements are 2 and 1
	{
		if(arr[i+1]==2&&arr[i+2]==1)
		count++; //counter which increments itself by 1 when a countdown is encountered
		else
		continue;	
	}
	else
	continue;
	
}  
 printf("No of countdowns in the array: %d \n",count);  
}
