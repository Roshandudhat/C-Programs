//write a program z=a+b-c*d/e.
#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e;
	printf("enter a");
	scanf("%d",&a);
	
	printf("enter b");
	scanf("%d",&b);
	
	printf("enter c");
	scanf("%d",&c);
	
	printf("enter d");
	scanf("%d",&d);
	
	printf("enter e");
	scanf("%d",&e);
	
	 
	
	int z=a-b-c-d-e;
	printf("\n that answer is:-%d",&z);
	return 0;
	getch();
	
	
}
