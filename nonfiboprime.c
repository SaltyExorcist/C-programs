#include<stdio.h>
#include<conio.h>
int isPrime(int n) //function to check if a no is prime or not
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

int isFibo(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n==)
		
	}
	if(c==2)
	return 1;
	else
	return 0;
	
}

main()
{
 int a[], f1=0, f2=f3=1, n, i=2;
 printf("Enter the upper range of the series:");
 scanf("%d",&n);
a[0] = a[1] = 1;
//n is the range
while(f1<n) 
{
f1=f2+f3;
f2=f3;
f3=f1;
a[i]=f1;
i=i+1;
}
 

 }
 getch();
}
