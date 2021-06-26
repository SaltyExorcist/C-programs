#include<stdio.h> 
long permutation(int n, int r);
long combination(int n, int r);
long factorial(int num);

int main(void)
{    
    int n, r;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter r: ");
    scanf("%d", &r);    
    printf("Combination = %ld", combination(n, r)); //calling the function and printing the value returned by it
    return 0; 
}

long permutation(int n, int r) //function to calculate and return permutation value
{
    return factorial(n) / factorial(n-r);
}

long combination(int n, int r) //function to calculate and return combination value
{
    return permutation(n, r) / factorial(r);
}

long factorial(int num) //function to calculate and return the factorial of a no
{
    long long fact = 1;

    while(num > 0)
    {
        fact *= num;
        num--;
    }

    return fact;
}
