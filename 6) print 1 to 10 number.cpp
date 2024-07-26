//program 6. write a program to print 1 to 10 number.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("enter any number");
	scanf("%d",&n);
	for(i=1;i<=n;i++);
	{
		printf("\n%d",i);
	}
	getch();
	return 0;
}
