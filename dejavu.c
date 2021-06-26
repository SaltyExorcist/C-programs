#include<stdio.h>
#include <stdlib.h>

int main()
{
char word[100];
int i,j,len=0,count=0;
printf("Enter the String: \n");
gets(word);

//finding the length of the string
  while (word[len] != '\0')
  {
    len++;
}
//checking if there are any duplicate letters in the string

            for (i=0;i<len-1;i++)
            {
                for (j=i+1;j<len;j++)
                {
                    if(word[i]==word[j])
                   {
                     count++; // a counter which increments itself by 1 when there is a duplicate character in the string
                    }
                    else
                    continue;
                }
            }
            if(count>0) 
            printf("Deja Vu");
            else
            printf("Unique");
            return 0;
}
        
