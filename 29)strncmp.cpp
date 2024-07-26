//writre a program to cheak strncmp
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str1[15];
	char str2[15];
	int ret;
	strcpy(str1,"abcdef");
	strcpy(str2,"ABCDEF");
	ret = strncmp(str1,str2,15);
	if(ret<0)
	{
		printf("str1 is less than str2");
	}
	else if(ret>0)
	{
		printf("str2 is less thann str1");
	}
	else
	{
		printf("str1 is equal to str2");
	}
	getch();
}
