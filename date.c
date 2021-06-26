#include<stdio.h>
#include <stdlib.h>

const char* dtformat(char wordd,int length)
{
	for(i=0;i<length;i++)
	{
		 
	}
	return wordd;
}

int main()
{
char date[100];
int i,j,len=0;
printf("Enter the date in US format: \n");
gets(date);
//finding the length of the string
  while (date[len] != '\0')
  {
    len++;
  }
  printf("Date in BU format: %s", dtformat(date,len));
  return 0;
}
