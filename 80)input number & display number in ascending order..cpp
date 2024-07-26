//write a program to input number & display number in ascending order.
#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10],d[20],n,i,j,t;
	
	printf("Enter the number or Elements in Array :- ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter the %d value :- ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("\n%d",a[i]);
	return 0;
}
