//write a program to interchange variable without using third variable.
#include<stdio.h>
#include<conio.h>
int main()
{    
	int a=10, b=20;      
	printf("Before swap a=%d b=%d",a,b);      
	a=a+b;   
	b=a-b;   
	a=a-b;    
	printf("\nAfter swap a=%d b=%d",a,b);    
	return 0;  
}   
	

