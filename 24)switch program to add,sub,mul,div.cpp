//program 24:-write a program to using switch().
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,ch;
	printf("enter number of a");
	scanf("%d",&a);
	printf("enter number of b");
	scanf("%d",&b);
	printf("______menu______");
	printf("\n 1.Sum");
	printf("\n 2.subtracation");
	printf("\n 3.multyplication");
	printf("\n 4.division");
	printf("\n _________________");
	printf("\n\n choose any number");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			c=a+b;
			printf("\n sum of two number is:%d",c);
			break;
			
			case 2:
				c=a-b;
				printf("\n subtraction of two number is:%d",c);
				break;
				 
				 case 3:
				 	c=a*b;
				 	printf("\n multypication of two number is:%d",c);
				 	break;
				 	
				 	case 4:
				 		c=a/b;
				 		printf("\n divion of two number is:%d",c);
				 		break;
				 		
					}
					return 0;
}
