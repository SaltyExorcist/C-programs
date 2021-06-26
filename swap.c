#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b);  //function declaration
void main(){
int a,b;
printf("Enter the first element:");
scanf("%d",&a);   //getting input from the user
printf("Enter the first element:");
scanf("%d",&b);
printf("\n Before swapping: a=%d b=%d\n",a,b);
swap(&a,&b);   //calling the function
printf("\n After swapping: a=%d b=%d\n",a,b);
getch();
}
void swap(int *a, int *b)
{
int temp;    //swapping a and b using a third variable "temp".
temp = *a;
*a=*b;
*b=temp;
}

/*
OUTPUT:
1)
Enter the first element:9
Enter the first element:6

Before swapping: a=9 b=6

After swapping: a=6 b=9

2)
Enter the first element:1
Enter the first element:5

Before swapping: a=1 b=5

After swapping: a=5 b=1

3)
Enter the first element:7
Enter the first element:5

 Before swapping: a=7 b=5

 After swapping: a=6=5 b=7

*/

