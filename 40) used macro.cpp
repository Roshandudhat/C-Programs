//program 40:- write a program to used macro.
#include<stdio.h>
#include<conio.h>
#define AREA(x)(3.14*x*x)
int main()
{
	float r1,r2,a,x;
	//clrscr();
	r1 =6.25;
	r2 =2.5;
	a =AREA(r1);
	printf("area of circle 1: %f\n",a);
	
	a =AREA(r2);
	printf("area of circle 2:%f\n",a);
	getch();	
}
