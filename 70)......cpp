//write a program to print half pyramid of alphbets.
/*
 A
 A B
 A B C
 A B C D
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	char i,j;
	for(i='A';i<='D';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf(" %c",j);
		}
		printf("\n");
	}
	return 0;
	getch();
	
}
