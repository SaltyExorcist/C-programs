#include<stdio.h>
#include <stdlib.h>

int main()
{
char c[25];
int i,symbol=0,dig=0,upper=0,lower=0,len=0,count=0;
printf("Enter the password \n");
scanf("%s",c);
//finding the length of the string
  while (c[len] != '\0')
  {
    len++;
  }
  
for(i=0;i<len;i++)
{
if(c[i]=='!'||c[i]=='@'||c[i]=='#'||c[i]=='$'||c[i]=='%'||c[i]=='&'||c[i]=='*') 
symbol++; //increments by 1 when a special symbol in the string is encountered
else if(isdigit(c[i]))
dig++; //increments by 1 when a digit in the string is encountered
else if(c[i]>=65&&c[i]<=90)
upper++; //increments by 1 when an uppercase letter in the string is encountered
else if(c[i]>=97&&c[i]<=122)
lower++;  //increments by 1 when a lowercase letter in the string is encountered

count++; //stores the no of characters in the string
}

if(symbol>=2&&dig>=2&&count>=7) //to check if the given string has atleast 2 numeric digits,2 special characters and has a length of atleast 7 characters
{
printf("Strong");
}
else
printf("Weak");
return 0;
}
