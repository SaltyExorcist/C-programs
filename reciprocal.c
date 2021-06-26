#include<stdio.h>
#include <stdlib.h>

int main()
{
char word[100];
int i,j,len=0;
printf("Enter the String: \n");
gets(word);
//finding the length of the string
  while (word[len] != '\0')
  {
    len++;
}
  
 char ch;
    for ( i=0;i<len; i++) 
	{
        // converting uppercase character
        // To reciprocal character
        // display the character
        if (isupper(word[i])) 
		{
            ch = 'Z' - word[i] + 'A';
            printf("%c",ch);
        }
  
        // converting lowercase character
        // To reciprocal character
        // display the character
        else if (islower(word[i]))
		 {
            ch = 'z' - word[i] + 'a';
            printf("%c",ch);
            
        }
  
        else {
            printf("%c",word[i]);
        }
    }
    return 0;
}
