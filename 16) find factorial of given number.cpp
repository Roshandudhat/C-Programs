//program 16:-write a program to find factorial of given number.
#include<conio.h>
#include<stdio.h>
int main()
{
	int i ,fact=1,n;
    printf("enter any number:-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    fact=fact*i;
    printf("factorial of %d ",fact);

    return 0;
    
}
