//program 19:- write a progarm to perform all arithmatic opretor.
#include<conio.h>
#include<stdio.h>
int main()
{
	float a,b,sum,sub,mul,div;
	printf("\n enter values:-");
	scanf("%f",&a);
    printf("\n enter  values:-");
	scanf("%f",&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("\n sum of two number is:%f",sum);
	printf("\n substrection of two number is:%f",sub);
	printf("\n multypilcation of two number is:%f",mul);
	printf("\n division of two number is:%f",div);
	return 0;
	
}
