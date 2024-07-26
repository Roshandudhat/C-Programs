//write a program to cheak even or odd number.
#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("enter any integer :");
	scanf("%d",&num);
	if(num %2==0)
		printf("%d is even number",num);
	else
		printf("%d is odd number",num);
	return 0;
	getch();
}
