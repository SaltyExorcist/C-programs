#include <stdio.h>
int main()
{
    int n,bal,i;
    printf("Enter the no of plots available for sale \n");
    scanf("%d",&n);
    int plot_amt[n]; // to store the plot prices
    int plot_buy[n];
     printf("Enter the amount of the plots respectively \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&plot_amt[i]);
    }
 printf("Enter the budget \n");
 scanf("%d",&bal);  //taking the budget amount from the user
for (i=0;i<n;i++)
    {
        if(bal>=plot_amt[i])
        {
        bal=bal-plot_amt[i];   //deducting the amount of the plot from the balance
        plot_buy[i]=(i+1);  //storng the position of the plots which the user can buy
        }
        else
        continue;
        
    }
printf("You can buy plot no ");
for (i=0;i<n;i++)
    {   if(plot_buy[i]!=0)
         printf("%d\n",plot_buy[i]);         
         else
         continue;
        
    }
    return 0;
}
