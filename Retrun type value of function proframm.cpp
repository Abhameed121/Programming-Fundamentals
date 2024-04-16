	
	#include <stdio.h>

	#include <stdlib.h>
	float function_calcuate(int,int,int);

	int main()
	{
	
	
	
	printf("Greetings and Good Morning Everybody!\n");

	int x, y, z;
	printf("Enter the value of x = \t");
	scanf("%d",&x);
	printf("\nEnter the value of y = \t");
	scanf("%d",&y);
	printf("\nEnter the value of z = \t");
	scanf("%d",&z);
	

	if(!y)
	{
	printf("The SOLUTION is undefined for y = 0 \n");
	printf("Please enter a non-zero value of y:\t");
	scanf("%d",&y);
	}
	float A;
	A = function_calcuate(x,y,z);

	printf("\nA = %.2f",A);
	

	return 0;
	}
	float function_calcuate(int x, int y, int z)
	{

	int a, b, c;
	printf("Enter the value of a= \t");
	scanf("%d",&a);
	printf("\nEnter the value of b = \t");
	scanf("%d",&b);
	printf("\nEnter the value of c = \t");
	scanf("%d",&c);
	
	float A;
	if(!c)
	{
	printf("The SOLUTION is undefined for c = 0 \n");
	printf("Please enter a non-zero value of c:\t");
	scanf("%d",&c);
	}
	float denominator, numerator, numerator_p1, numerator_p2;
	
	numerator_p1 = 7.7*b;
	
	numerator_p2 = (x*y+a)/c;

	numerator = (numerator_p1*numerator_p2)- 0.8 + (2*b);

	denominator = (x+a)*(1.0/y);
	
	A = numerator/denominator;
	return A;
	}
