//write a program to used sqrt in math.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	double number, squareRoot;
	printf("Enter a number: ");
   	scanf("%lf", &number);
   	squareRoot = sqrt(number);
   	printf("Square root of %.2lf =  %.2lf", number, squareRoot);
	return 0;	
}
