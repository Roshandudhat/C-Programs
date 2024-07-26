//patten 
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,k;
	printf("enter a niumber ");
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
