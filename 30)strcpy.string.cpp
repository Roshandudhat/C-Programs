//write a program to cheak strcpy.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char src[40];
	char dest[100];
	memset(dest,'\0',sizeof(dest));
	strcpy(src,"HELLO FRIENDS");
	strcpy(dest,src);
	printf("final copied string:%s\n",dest);
	getch();
	return 0;
}
