//write a program to used log10() in math.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	double x = 4.2, result;
    result = log10(x);
    printf("log(%lf) = %lf", x, result);
    return 0;
}
