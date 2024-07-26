//patten 
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i++)
	{
		for(j=1;j>=5;j++)
		{
			printf("%c",'A'+j-1);
		}
		printf("\n");
	}
	return 0;
}
