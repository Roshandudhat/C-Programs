//write a program to follwing number patten.
/*
1 1 1
2 2 2
3 3 3
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	printf("enter any number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
