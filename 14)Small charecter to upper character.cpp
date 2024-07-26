//write a program to enter any small character & display.
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("\nEnter any small character:");
	scanf("%c",&ch);
	ch=ch-32;

	printf("\nUpper case character is:%c",ch);

	return 0;
}
