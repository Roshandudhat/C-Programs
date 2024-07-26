/*write a program to  menudriven  opration user switch case.
factorial
prime or not number
polidrome or not number
armstong or not number
fiboniccial number
area of circle
area of triangle
squuare of given number
*/

#include<stdio.h>
#include<conio.h>
#define pi 3.14

int main()
{
	int choice,i,n,fact,count,r,c,temp,sum;
	printf("find a types of numbers");
	printf(".....menu....");
	printf("\n1.factorial");
	printf("\n2.prime number");
	printf("\n3.polidrome number");
	printf("\n4.armstrong number");
	printf("\n5.fibonaniccial series");
	printf("\n6.area of triangle");
	printf("\n7.area of circle");
	printf("\n8.squuare of given number");
	printf("\nenter a choice");
	printf("\n");
	
	scanf("%d",&choice);
	printf("\n");
	switch(choice)
	{
		case 1: 
		printf("enter a number to find factorial:");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		fact=fact*i;
		printf("factorial of %d is:-%d",n,fact);

		break;
		
	case 2:
			printf("enter a number");
			scanf("%d",&n);
			for(i=1;i<=n;i++)
			{
				if(n%i==0)
				{
					count++;
				}
				
				}
				if(count==2)				
				printf("it is prime number");
				else
				printf("it is not prime number");
				break;	
	case 3:
			printf("enter a number:");
			scanf("%d",&n);
			temp=n;
			while(n>0)
			{
				r=n%10;
				sum=(sum*10)+r;
				n=n/10;
			}
			if(temp==sum)
			printf("polindrome number");
			else
			printf("not polindrome number");
	
			break;
	case 4:
				for(i=1;i<=1000;i++)
				{
					n=i;
					sum=0;
					temp=n;
					while(n>0)
					{
						r=n%10;
						c=r*r*r;
						sum=sum+c;
						n=n/10;
					}
					if(sum==temp)
					{
					printf("%d\n",temp);
				}
			
				break;
				
					
				}
	case 5:
	    	int number,i,n1,n2,n3;
			printf("enter the number of elements:");
			scanf("%d",&number);
			for(i=1;i<=number;++i)
			{
				n3=n1+n2;
				printf("%d\t",n1);
				n1=n2;
				n2=n3;
			}
		     
		     break;
	case 6:
			float a,b, area;  
    		printf("enter any number:-");
    		scanf("%f",&a);
    		printf("enter any value:-");
    		scanf("%f",&b);
 			area = (a*b) / 2 ;  
   		 	printf("\n Area of Triangle is: %f",area);  
    		break;
    	
    case 7:
			int r;
			float ar;
			printf("enter radios of circle:");
			scanf("%d",&r);
			ar = pi*r*r;
			printf("\n AREA OF CIRCLE: %f",ar);
    		break;
    case 8:
		int n;
		printf("enter any number");
		scanf("%d",&n);
		n=n*n;
		printf("squuare of number:-%d",n);	
		break;
		

	}
				
			
	
	return 0;
}
