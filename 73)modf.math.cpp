//write a program to used modf() in math.
#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c;
	a = 54.545;
	c = modf(a, &b);
	printf("The calculated value is: %lf \n\n", c);
	return 0;
}
