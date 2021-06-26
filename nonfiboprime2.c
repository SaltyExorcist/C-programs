#include<stdio.h>
int isPrime(int n)  //function to check if a no is prime or not
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==2)
	return 1;
	else
	return 0;
	
}
int main()
{
int n,a,b,c,x,d;
a=0;
b=1;
c=0;
printf("Enter the upper range of the series:");
scanf("%d",&n);
while(c<=n) 
{
c=a+b;
a=b;
b=c;
d=a+b;

for(x=c+1;x<d;x++) //iterating through all the non_fibo numbers 
{
if(x<=n)
{
if(isPrime(x)==0) //checking if the numbers are prime or not
printf("%d",x); //only printing those numbers which are non-prime
else 
continue;
}
else
break;
}
}
}
