//write a prohgaram to print sum of 1 to 100 number.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=100;i++)
	{
		sum = sum+i;
	}
	printf("The sum of numbers from 1 to 100 %d",sum);
	getch();
	return 0;
	
}
