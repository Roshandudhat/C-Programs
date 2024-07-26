//progaram 21:-write a program to interchanger using third variable.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter a value of a");
	scanf("%d",&a);
	printf("enter a value of b");
	scanf("%d",&b);
	printf("\nBefore interchanger value of a is:%d",a);
	printf("\nBefore interchnager value of b is:%d",b);
	c=a;
	b=c;
	a=b;
	printf("\nafter interchanging value of a is:%d",a);
	printf("\n after interchanging value of b is :%d",b);
	
	return 0;
}
