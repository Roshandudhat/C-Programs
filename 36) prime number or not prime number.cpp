//write a program to find prime number ar not prime number.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,count;
	printf("enter any number:-");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			i++;
		}
	 } 
	if(i==2)
	{
		printf("1 to 100 number %d",a);
	}
	
	return 0;
	getch();	
}
