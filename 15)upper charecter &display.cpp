//write a program to enter upper chareacter & display

#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("\nEnter any uppper character:");
	scanf("%c",&ch);
	ch=ch+32;
	printf("\nsmall case character is:%c",ch);
	return 0;
}
