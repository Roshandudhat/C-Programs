//program 4:-write a program maximum of two number.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	/*take two integer as input from user*/
	printf("enter two integers \n");
	scanf("%d%d",&a,&b);
	if(a>b)
   {
   	/*a is greater than b*/
	printf("%d is largest \n",a);
   	}
   	else if(b<a)
   	{
   		/*b is greater than a*/
   		printf("%d is largest \n",b);
	   }
	else
	{
		printf("both equal \n");
	}
	getch();
}
