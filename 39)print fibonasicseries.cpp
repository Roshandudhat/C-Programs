// write a program to print fibonasicseries.
#include<stdio.h>
#include<conio.h>
int main()
{
	int number,i,n1,n2,n3;
	printf("enter the number of elements:");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		n3=n1+n2;
		printf("%d\t",n1);
		n1=n2;
		n2=n3;
	}
	return 0;
}
