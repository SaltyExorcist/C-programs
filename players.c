#include <stdio.h>
int main()
{
    int n,tp,i,j,temp=0,days=0;
    printf("Enter the no of students \n");
    scanf("%d",&n);
    int student_lvl[n]; //array to store the exp level of the students
     printf("Enter the levels of students respectively \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&student_lvl[i]);
    }

//sorting the array in ascending order
for (i=0;i<n-1;i++)      
  { 
       for (j=0;j<n-i-1;j++)
	   {
           if (student_lvl[j]>student_lvl[j+1])
           {
           	temp= student_lvl[j];
           	student_lvl[j]=student_lvl[j+1];
           	student_lvl[j+1]=temp;
		   }
	   }
    }
   printf("Enter the no of players required \n");
     scanf("%d",&tp);
    
    for (i=0;i<tp;i++)  //iterating the loop upto the position of the max no of players required by the user
    {   
        days=days+student_lvl[i]; 
	}
	
	printf("%d days required \n",days);
    
	return 0;
}

   
		   
