//write a program to print multification table.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,m;
	printf("enter a number:-");
	scanf("%d",&a); 
	printf("the maltification table is:-");
	for(m=1;m<=10;m++)
	{
		printf("\n%d * %d= %d",a,m,a*m);
	}
	return 0;
	
}
