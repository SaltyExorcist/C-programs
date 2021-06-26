#include<stdio.h>
int main()
{
 int i,n, a[20];
 printf("Enter the size of the array: ");
 scanf("%d", &n);
 printf("Enter array elements: \n");
 for(i=0; i<n; i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Even numbers in the array are: \n");
 for(i=0; i<n; i++)
 {
 if(a[i]%2==0)
 printf("%d ", a[i]);
 }
 printf("\nOdd numbers in the array are: \n");
 for(i=0; i<n; i++)
 {
 if(a[i]%2!=0)
 printf("%d ", a[i]);
 }
 return 0;
}

