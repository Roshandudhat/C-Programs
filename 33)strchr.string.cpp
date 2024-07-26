//write a program to cheak strchr().
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int len;
	const char str[]="http://www.vnsgu.org";
	const char ch='.';
	char*ret;
	ret=strrchr(str,ch);
	printf("string after |%c| is - |%s|\n ",ch,ret);
	getch();
	
}
