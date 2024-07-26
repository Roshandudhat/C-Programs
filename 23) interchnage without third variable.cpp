//program 23: write a progam to interchnage without using third variable.
#include<stdio.h>
#include<conio.h>
int main()
{
	int y,z;
	printf("enter a value of y:");
	scanf("%d",&y);
	printf("enter a value of z:");
	scanf("%d",&z);
	printf("\nbefore interchnage value of y is:%d",y);
	printf("\nbefore interchnage value of z is:%d",z);
    y=y+z;
    z=y-z;
    y=y-z;
	printf("\nafter interchnage value of y is:%d",y);
	printf("\nafter interchnage value of z is:%d",z);
	return 0;
}
