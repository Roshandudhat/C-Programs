/*w.a.pro to of switch case [ menu driven program ]
1.factarial
2.fibanaccic series
3.prime no or not
4.polidrom no or not
5.armstrong no or not
6.area of circle
7.area of triangle
8.squuare of given no
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,fact,sum=0,a=0,r,b=1,c,h,choice,temp;
	float area;
	printf(".....Menu.....");
	printf("\n1.Factorial:-");
	printf("\n2.Fibonacci Series:-");
	printf("\n3.Prime Number:-");
	printf("\n4.Polidrome Number:-");
	printf("\n5.Armsrtong Number:-");
	printf("\n6.Area of a Circle:-");
	printf("\n7.Area of Triangle:-");
	printf("\n8.Square of Given number:-");
	printf("\nEnter Your Choise\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter a Number :- ");
			scanf("%d",&n);
			fact=1;
		for(i=1;i<=n;i++)
		{
			fact=fact*i;
		}
		printf("Factorial of Given No. is :- %d",fact);
		break;
		
		case 2:
			printf("Enter a Number :-");
			scanf("%d",&n);
			
			for(i=1;i<=n;i++)
			{
				printf("%d\n",a);
				c=a+b;
				a=b;
				b=c;
			}
		break;
		
		case 3:
			printf("Enter a Number :- ");
			scanf("%d",&n);
			if(n>0)
			temp=0;
			for(i=2;i<=n;++i)
			{
				if(n%i==0)
				{
					temp=1;
				}
			
			
			
				if(temp==0)
				{
					printf("Prime Number ");
				}
				else
				{
					printf("Not Prime Number ");
				}
			}
			break;
				
		case 4:
			printf("Enter a Number :- ");
			scanf("%d",&n);
			temp=n;
			
			while(n>0)
			{
				r=n%10;
				sum=(sum*10)+r;
				n=n/10;
			}
			if(sum==temp)
			{
				printf("Polidrome Number ");
			}
			else
			{
				printf("Not Polidrome Number");
			}
			break;
			
			case 5:
				printf("Enter a Number :-");
				scanf("%d",&n);
				i=n;
				while(n>0)
				{
					r=n%10;
					c=r*r*r;
					sum=sum+c;
					n=n/10;
				}
				if(sum==i)
				{
					printf("%d is Armstrong Number ",i);
				}
				else
				{
					printf("%d is Not Armstrong Number",i);
				}
			break;
			
			case 6:
				printf("Enter a r:- ");
				scanf("%d",&r);
						
				area=3.14*r*r;
				printf("Area is %f",area);	
				
				break;
			case 7:
				printf("Enter a Value of B :-");
				scanf("%d",&b);
				printf("Enter a Value of H :-");
				scanf("%d",&h);
				area=(b*h)/2;
				printf("Area of Triangle is :-%f",area);
				break;
			case 8:
				printf("Enter a Number :- ");
				scanf("%d",&n);
				
				printf("Square of Given Number is :- %d",n*n);
		
	}
	return 0;
}
