//write a program to used pow () in math.
#include <stdio.h>  
#include <math.h>  
int main ()  
{  
	int base, exp;  
	int result; 
	printf (" Enter the base value from the user: ");  
	scanf(" %d", &base);
	printf(" Enter the power value for raising the power of base: ");  
	scanf(" %d", &exp);   
  
	result = pow ( base, exp);  
	printf (" %d to the power of %d is = %d ", base, exp, result);  
	return 0;  
}  
