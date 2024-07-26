////write a program to find armstrong or not.
//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//	int i,a,n,c,r,sum,temp;
//	printf("enter a any number :");
//	scanf("%d",&a);
//	for(i=1;i<=a;i++)
//	{
//		n=i;
//		sum=0;
//		temp=n;
//		
//		while(n>0)
//		{
//			r=n%10;
//			c=r*r*r;
//			sum=sum+c;
//			n=n/10;
//		}
//		if(sum==temp)
//		{
//			printf("%d\n",temp);
//		}
//	}
//	return 0;
//}
write a program to armstrong number or not number in c launguage?

#include <stdio.h>

int main()

{

    int num, originalNum, remainder, result = 0;

    printf("Enter a three-digit integer: ");

    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0)

    {

        remainder = originalNum%10;

        result += remainder*remainder*remainder;

        originalNum /= 10;

    }

    if(result == num)

        printf("%d is an Armstrong number.",num);

    else

        printf("%d is not an Armstrong number.",num);

    return 0;

}
