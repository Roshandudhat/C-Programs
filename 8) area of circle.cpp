//write a program to find area of circle
#include<conio.h>
#include<stdio.h>
int main()
{
	int r;
	float pi=3.14,area ;
	printf("enter radios of circle:");
	scanf("%d",&r);
	area = pi*r*r;
	printf("\n AREA OF CIRCLE: %f",area);
	return 0;
}
