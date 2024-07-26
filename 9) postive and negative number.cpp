//write a progarm to cheak wheather a given number is positive or negative. 
#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("enter any number :");
	scanf("%d",&num);
	if(num>=0)
	    printf("%d is a positive number \n",num);    
	else
	    printf("%d is a nagative number \n",num);
	return 0;
    getch();
}
