//write a program to print half pyramid of number.
/*
    5
   44
  333
 2222
11111
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k,n;
	printf("enter any number");
	scanf("%d",&n);
	i=n;
	
	while(i>=1)
	{
		j=n;
		k=i-1;
		
		while(j>=i)
		{
			while(k>0)
			{
				printf(" ");
				k--;
			}
			printf("%d",i);
			j--;
		}
		i--;
		printf("\n");
	}
	return 0;
}
