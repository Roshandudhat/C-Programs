//write a progarm to print ASCII value of given character.
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("\n enter any character");
	scanf("%c",&ch);
	printf("ASCII value of %C character is a %d ",ch,ch);
	getch();
	return 0;
}
