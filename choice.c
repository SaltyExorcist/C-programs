#include <stdio.h>
int main()
{
 int i,j,k,n,ch,a[20];
 printf("Enter the size of the array: ");
 scanf("%d", &n);
 printf("Enter array elements: \n");
 for( i=0; i<n; i++)
 {
 scanf("%d",&a[i]);
 }
    printf("Enter 1 to print the even valued elements.\n");
    printf("Enter 2 to print the odd valued elements.\n");
    printf("Enter 3 to Calculate and print the sum and average of the elements of array.\n");
    printf("Enter 4 to Print the maximum and minimum element of array.\n");
    printf("Enter 5 to Remove the duplicates from the array.\n");
    printf("Enter 6 to print the array in reverse order.\n");
	printf("Enter your choice");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
		 printf("Even numbers in the array are: \n");
         for(i=0; i<n; i++)
         {
            if(a[i]%2==0)
            printf("%d ", a[i]);
         }
         break;
         case 2:
         printf("\nOdd numbers in the array are: \n");
          for(i=0; i<n; i++)
          {
            if(a[i]%2!=0)
            printf("%d ", a[i]);
        }
        break;
        case 3: ;
        float avg=0;
        int sum=a[0];
        for(i=0; i<n; i++)
          {
          	sum=sum+a[i];
          }
          avg= (float)sum/n;
          printf("The sum is %.d\n",sum);
          printf("The average is %.f\n",avg);
          break;
          case 4: ;
          int max,min;
          max=a[0];
          min=a[0];
          for(i=1;i<n;i++)
         {
           if(a[i]>max)
           max=a[i];
           if(a[i]<min)
           min=a[i];
	    }
	      printf("The maximum number is %d\n",max);
          printf("The minimum number is %d\n",min);
          break;
          case 5:
          printf("\nOriginal array is: ");
          for(i = 0; i < n; i++)
           {
              printf(" %d", a[i]);
            }
          printf("\nNew array is: ");
          for(i = 0; i < n; i++)
          {
            for(j = i+1; j < n; )
             {
               if(a[j] == a[i])
                {
                  for(k = j; k < n; k++)
                   {
                     a[k] = a[k+1];
                        }
                    n--;
                    }
                    else
                    {
                      j++;
                    }
                  }
               }
               for(i = 0; i < n; i++)
                {
                  printf("%d ", a[i]);
                    }
                   getch();
          case 6:
          printf("Reverse array:");
          for(i = n; i >= 0; i--)         
          printf("%d ", a[i]);
          break;
         default:
         printf("Wrong choice.");
         break;	
     }
        return 0;
    }
    
		
		 
	

