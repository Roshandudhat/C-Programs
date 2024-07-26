#include<stdio.h>
#include<conio.h>
int main()
{
	int count=0,i=0,j=0,n=0;
	while(n<25)
	{
		j=1;
		count=0;
		while(j<=0)
		{
			if(i%j==0)
			count++;
			j++;
			
		}
		if(count==2)
		{
			printf("%d\t",i);
			
		}
		i++;
	}	
		return 0;
}
