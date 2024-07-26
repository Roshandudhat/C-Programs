//write a prorgam to used exp() in math.
#include <stdio.h>  
#include <math.h>  
int main()  
{  
	float power, result;  
	printf(" Please input the value to raise e :  \n");  
	scanf("%f", &power);  
	result = exp(power);  
	printf("\n The value for e raised to the power %.4f is = %.6f \n", power, result);  
	return 0;  
}  
