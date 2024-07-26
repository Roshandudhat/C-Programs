//write a program to using string() strchr().
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	const char str[]="WE ARE @AMBABA COLLAGE";
	const char ch ='@';
	char*ret;
	ret=strchr(str,ch);
	printf("string after |%c| is |%s| \n ",ch,ret);
	getch();
	
}
