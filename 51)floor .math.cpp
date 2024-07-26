//write a program to used floor() in math.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float realno1, realno2, realno3, realno4, realno5, realno6;  
	float answer, answer1;  
	realno1 = 3.1;  
	realno2 = 9.8;  
	realno3 = 11.9;  
	realno4 = 12.1;  
	realno5 = 16.5;  
	realno6 = 11.1;  
	printf("floor value of realno1 is = %.1lf\n", floor(realno1));  
	printf("floor value of realno2 is = %.1lf\n", floor(realno2));  
	printf("floor value of realno3 is = %.1lf\n", floor(realno3));  
	printf("floor value of realno4 is = %.1lf\n", floor(realno4));  
	printf("floor value of realno5 is = %.1lf\n", floor(realno5));  
	answer = floor(realno6);  
	printf("floor value of realno6 is = %.1f\n", answer);  
	answer1 = floor(9.99);  
	printf("floor value of value is = %.1f\n", answer1);  
	return 0;  

}
