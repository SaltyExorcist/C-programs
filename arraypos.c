#include<stdio.h>
int main()
{
	int i,n,s=0,pos=0,sign=0;
	printf("Enter the size of array \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the matrix: \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

for(i=0;i<n;i++)
{
	
	pos=arr[i]*(i+1); //multiplying the element in the array with its position number
	if((i+1)%2==0) //to check if the element is at even position, if yes then changing the sign to -ve else positive
	sign=-1;  
	else
	sign=1;
	
   s=s+(pos*sign); //calculating the sum of the results from above
}  
 printf("Sum: %d \n",s);
    
}
