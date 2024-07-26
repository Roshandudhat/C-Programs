//program 22:-write a program to interchange using third veriable.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter a value of a:");
	scanf("%d",&a);
	printf("enter a value of b:");
	scanf("%d",&b);
	printf("\nbefore interchnage value of a is:%d",a);
	printf("\nbefore interchnage value of b is:%d",b);
	c=a;
	a=b;
	b=c;
	printf("\nafter interchnage value of a is:%d",a);
	printf("\nafter interchnage value of b is:%d",b);
	return 0;
}
