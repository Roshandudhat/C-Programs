//program 38:-write a proram to perform to polidromeno.
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,temp,sum,r;
	printf("enter a number:-");
	scanf("%d",&n);
	temp =n;
	while(n>0)
	{
		r = n%10;
		sum=(sum*10)+r;
		n=n/10;
		
				}
				if(temp == sum)	
				printf("polindrome number");
				else
				printf("not polindrome number");
	return 0;			
}
