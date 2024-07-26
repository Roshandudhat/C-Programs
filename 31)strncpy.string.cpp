//write a program to cheak strncpy.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char src[40];
	char dest[12];
	memset(dest,'\0',sizeof(dest));
	strcpy(src,"HELLO FRIENDS");
	strncpy(dest,src,10);
	printf("final copied string:%s\n",dest);
	getch();
	return 0;
}
