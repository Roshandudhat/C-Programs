//write a program to display sum of two matrix.
#include<stdio.h>
#include<conio.h>

int main()
{
	float a[2][2],b[2][2],c[2][2];
	
	int i,j;
	printf("Enter the elements of first matrix \n :-");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a %d %d :-\n ",i+1,i+1);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter b %d %d :- \n",i+1,j+1);
			scanf("%f",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Sum of Matrix");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n%f\t",c[i][j]);
			if(j==1)
			printf("\n");
		}
	}
//	return 
}
