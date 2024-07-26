//write a program roshan travel payment method().
#include<stdio.h>
#include<conio.h>
int main()
{
	int choice;
	int ch;
	printf("\n make your jaurny safe with us||||||||| \n");
	printf("\n===========================================================================================================================================================================");
	printf("\n WELCOME TO****** ROSHAN INTERNATIALS****** TRAVEL ADVICES \n");
	printf("\n ==========================================================================================================================================================================");
	printf("\n                   1.by Roadway");
	printf("\n                   2.by Raliway");
	printf("\n                   3.by ariways");
	printf("\n                   4.by waterways");
	printf("\n                   5.by ropeways");
	printf("\n                   6.by otherways");
	printf("\n           choose your desination\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\n payment by hard cash");
			break;
			case 2:
				printf("\n payment by bank transaction");
				break;
				case 3:
					printf("\n payment by onine payments");
					break;
					case 4:
					printf("\n payment by UPI ID");
					break;
					case 5:
					printf("\n payment by redeem code");
					break;
					case 6:
					printf("\n payment by other ways");
					break;
					printf("\n*****THANKS FOR USING OUR SERVICE*****");
					printf("VISIT AGAIN");
					defsult:
						printf("something went wrong");
						
	}
	printf("\n********************************************");
	printf("\n THANKS FOR VISITING");
	printf("\n visit AGAIN");
	printf("\n*********************************************");
	getch();
	return 0;
	
	
}
