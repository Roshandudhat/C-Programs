//write a program to used log() in math.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	double n, result;

  	printf("Enter a number to calculate its natural logarithm (base = e)\n");
  	scanf("%lf", &n);
		
  	result = log(n);

  	printf("Natural log of %.2lf = %lf\n", n, result);
		
  	return 0;

 } 
