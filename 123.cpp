//
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,j;
	printf("enter a row:");
	scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		for(j=i;j<0;j++)
		{
			printf(" * ");
		}
		printf("*\n");
	}
	return 0;	
}
