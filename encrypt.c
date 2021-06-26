#include<stdio.h>
#include <stdlib.h>

int main()
{
char str1[100],str2[100];
int i,j,len=0;
printf("Enter the password \n");
gets(str1);
//finding the length of the string
  while (str1[len] != '\0')
  {
    len++;
  }
  j = len-1;

//reversing the string by swapping
  for (i=0;i<len;i++)
  {
    str2[i] = str1[j];
    j--;
  }
  j=0;
  
for(i = 0; str2[i] != '\0'; ++i)
{
while (!( (str2[i] >= 'a' && str2[i] <= 'z') || (str2[i] >= 'A' && str2[i] <= 'Z') || str2[i] == '\0') )  //checking if the characters are letters or not, if no, then removing it
{
for(j = i; str2[j] != '\0'; ++j)
{
str2[j] = str2[j+1];
}
str2[j] = '\0';
}
}
 printf("\n Resultant String : ");
puts(str2); 	
return 0;
}

