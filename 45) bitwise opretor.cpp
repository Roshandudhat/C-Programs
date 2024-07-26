//program 46:- write a program to bitaeise opretor.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c=0;
	printf("enter any value:-");
	scanf("%d",&a);
	printf("enter any value:-");
	scanf("%d",&b);
	
	c=a&b;
	printf("\n value of c is %d",c);
	c=a|b;
	printf("\n value of c is %d",c);
	c=~a;
	printf("\n value of c is %d",c);
	c=a<<2;
	printf("\n value of c is %d",c);
	c=a>>2;
	printf("\n value of c is %d",c);
	c=a^b;
	printf("\n value of c is %d",c);
	
	return 0;
}
