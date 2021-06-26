#include <stdio.h>
#include <stdlib.h>
    int main()
    {
        int i,j,temp;
        int m[4];
        printf("Enter elements in the array");
        for(i=0;i<4;i++)
        {
            m[i]=scanf("%d",m);
        }
        for(i=0;i<4;i++)
        {
            for(j=0;j<4-i-1;j++)
            {
                if(m[j]>m[j+1])
                {
                    temp=m[j];
                    m[j]=m[j+1];
                    m[j+1]=temp;
                }
            }
        }
        printf("The numbers arranged in sorted row order are:");
        for(i=0;i<4;i++)
        {       
            printf("%d",m[i]);
        printf("\n");
    }
	return 0;
}
/*
 OUTPUT:
Enter size of the array
4
Enter elements in the array
8
6
4
5
3
5
2
1
4
7
4
2
7
8
9
5
The numbers arranged in sorted row order are:
4 5 6 8 
1 2 3 5 
2 4 4 7 
5 7 8 9 
 */

    


                    
        