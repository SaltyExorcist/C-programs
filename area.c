#include<stdio.h>
#include<conio.h>
void area_cir(int *, float *,float *);  //funtion declaration
void main()   //main function
{
	int r;          //variable declaration
	float a,c;
	printf("enter the radius: ");
	scanf("%d",&r);
	area_cir(&r,&a,&c);  //calling the function 'area_cir()'
	printf("\n area = %f, circumference = %f",a,c);
	getch();
}
void area_cir(int *r,float *a,float *c)
{
	*a=3.14*(*r)*(*r);    // calculating the area
	*c=2*3.14*(*r);       // calculating the circumference
}

/*
OUTPUT:

1)
enter the radius
5
area = 78.500000, circumference = 31.400000

2)
enter the radius
7
area = 153.860001, circumference = 43.959999

3)
enter the radius
10
area = 314.000000, circumference = 62.799999
*/


