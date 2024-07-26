//write a program to used of ceil() math.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float num;  
	float result;  
  
	printf (" Enter the float number: ");  
	scanf ( "%f", &num);   
  
	// use ceil () function  
	result = ceil (num);  
  
	printf ( " The ceil of %.2f is %f ", num, result);  
	return 0;  
}
