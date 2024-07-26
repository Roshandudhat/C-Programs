//write a program to cheak strlen()
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[50];
	int len;
	strcpy(str,"welcome to sabargarm collage");
	len=strlen(str);
	printf("Length of |%s| is |%d| \n",str,len);
	getch();
	
}
