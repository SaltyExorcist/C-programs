// C program to find GCD of two numbers using recursion
#include <stdio.h>
int gcd(int a, int b)    // Recursive function to return gcd of a and b
{
	// Everything divides 0 
	if (a == 0)
	return b;
	if (b == 0)
	return a;

	// base case
	if (a == b)
		return a;

	// a is greater
	if (a > b)
		return gcd(a-b, b);
	return gcd(a, b-a);
}

int main()
{
	int a,b;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
	printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
	return 0;
}

