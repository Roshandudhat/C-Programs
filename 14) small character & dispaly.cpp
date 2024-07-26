//write a program to enter any small character & display.
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch,c;
	printf("\n enter any character in small letter:-");
	scanf("%c",&ch);
	c=ch-32;
	printf("\n %c UPPER CASE CHARACTER %c",ch,c);
	return 0;
}
