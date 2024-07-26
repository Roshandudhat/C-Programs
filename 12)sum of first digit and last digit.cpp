//write a progarm to display sum of first & last digit.
#include<stdio.h>
#include<conio.h>
int main()
{
   long number,firstdigit,lastdigit,sum;
   printf("Enter any number:-");
   scanf("%d",&number);
   lastdigit =number%10;
   while(number>9)
   {
   	number =number/10;
	   }	
	   firstdigit =number;
	   sum= firstdigit + lastdigit;
	   printf("sum of first digit and last digit is : %d",sum);
	   getch();
	   return 0;
}

