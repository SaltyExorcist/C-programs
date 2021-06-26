#include <stdio.h>
int main()
{
 int i,j,k,m,n,ch,a[20][20],b[20][20];
 	printf("Enter the number of rows and columns of matrix\n");
        scanf("%d%d", &m, &n);

		 printf("Enter array1 elements: \n");
         for( i=0; i<m; i++)
         {
         	for( j=0; j<n; j++)
           scanf("%d",&a[i][j]);
         }
         printf("Enter array2 elements: \n");
         for( i=0; i<m; i++)
         {
         	for( j=0; j<n; j++)
           scanf("%d",&b[i][j]);
         }
    printf("Enter 1 to calculate the sum of two matrices.\n");
    printf("Enter 2 to calculate the difference between two matrices.\n");
    printf("Enter 3 to calculate the product of two matrices.\n");
    printf("Enter 4 to Print the transpose of the matrix.\n");
	printf("Enter your choice\n");
	scanf("%d", &ch);
	switch(ch)
	{
		int sum[20][20];
		case 1:
	    for( i=0; i<m; i++)
         {
         	for( j=0; j<n; j++)
         	{
			 
            sum[i][j]= a[i][j] + b[i][j];
        }
    }
             printf("\nSum of two matrices: \n");
            for (i = 0; i < m; ++i)
              for (j = 0; j < n; ++j) {
            printf("%d ", sum[i][j]);
           if (j == n-1) {
               printf("\n\n");
            }
        }
         break;
         case 2: ;
         	int diff[20][20];
        for( i=0; i<m; i++)
         {
         	for( j=0; j<n; j++)
         	{			 
            diff[i][j]= a[i][j] - b[i][j];
            printf("%d\t",diff[i][j]);
        }
        printf("\n");
    }
        break;
        case 3: ;
        int multiply[20][20];
        int s=0;
         if (m!=n)
        printf("The multiplication isn't possible.\n");
        else
        {
          printf("Enter elements of second matrix\n");
          for (i = 0; i< m; i++)
           {
            for (j = 0; j < n; j++)
            {
               scanf("%d", &b[i][j]);
            }
           }
            for (i=0;i<m;i++) 
            {
              for (j=0;j<n;j++)
               {
                for (k=0;k<m;k++)
                 {
                    s=s+a[i][j]*b[j][i];
                 }
                 multiply[i][j]=s;
                 s=0;
                 }
             } 
                 printf("Product of the matrices:\n");
                for (i = 0; i<m;i++)
                 {
                  for (j=0;j<n;j++)
                  {
                   printf("%d\t", multiply[i][j]);
                  }
                   printf("\n");
                }
        }
        case 4: ;
        int transpose1[20][20],transpose2[20][20];
         for( i=0; i<m; i++)
         {
         	for( j=0; j<n; j++)
         	{	 
            transpose1[j][i]= a[i][j];
            transpose2[j][i]= b[i][j];
        }
    }
             printf("\nTranspose of two matrices: \n");
            for (i = 0; i < m; i++)
            {
              for (j = 0; j < n; j++)
            {
            printf("%d ", transpose1[i][j]);
            }
            printf("\n");
            }
              for (i = 0; i < m; i++)
            {
              for (j = 0; j < n; j++)
            {
            printf("%d ", transpose2[i][j]);
            }
            printf("\n");
            }
         default:
         printf("Wrong choice.");
         break;	
     }
        return 0;
}


    
		
		 
	

