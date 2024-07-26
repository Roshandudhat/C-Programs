//write a program to string () using Strcat().
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str1[50]="Roshan";
	char str2[50]="Dudhat";
	strcat(str1,str2);
	printf("The jioning string is:%s",str1);
	return 0;
}
