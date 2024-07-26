//progarm 20:-writeb a progarm to all relational oprector.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("\n enter a value of a:-");
	scanf("%d",&a);
	printf("\n enter a value of b:-");
	scanf("%d",&b);
	if(a==b)
	{
		printf("\n a & b is equal");
	}
	if(a<b)
	{
		printf("\n b greater than a");
	}
	if(a>b)
	{
		printf("\n a greater than b");
	}
	return 0;
}
