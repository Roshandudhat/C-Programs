//write a program find simple interest.
#include<stdio.h>
#include<conio.h>
int main()
{
	int P,R,N,SI;
	printf("enter a principal amount:-");
	scanf("%d",&P);
	printf("enter the rate of interest:-");
	scanf("%d",&R);
	printf("enter the value of number:-");
	scanf("%d",&N);
	SI=P*R*N/100;
	printf("\n \n simple interest is:-%d",SI);
	return 0;
	getch();
 } 
