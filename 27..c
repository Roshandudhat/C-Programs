#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k;
	i=9;
	
	while(i>=1)
	{
		j=9;
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
