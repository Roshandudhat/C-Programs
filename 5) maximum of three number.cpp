// write a program maximum of three number.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter a three variable value");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\n a maximum number is %d",a);
		}
		else{
			printf("\n c maximum number is %d",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n b maximum number is %d",b);
		}
		else
		{
			printf("\n c maximun number is %d",c);
		}
	}
	getch();
	return 0;
}
