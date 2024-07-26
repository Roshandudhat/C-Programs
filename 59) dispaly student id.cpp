//Write a program to display marks.
#include<stdio.h>
#include<conio.h>


int main()
{
    char name;
    int no,s1,s2,s3,s4,s5,s6,s7,sum;
    float per;
    printf("Enter Student Name:");
    scanf("%s",&name);
    printf("Enter Roll Number:");
    scanf("%d",&no);
    printf("\n....Marks....");
    printf("\nECO:");
    scanf("%d",&s1);
    printf("\nSTAT:");
    scanf("%d",&s2);
    printf("\nAC:");
    scanf("%d",&s3);
    printf("\nSP:");
    scanf("%d",&s4);
    printf("\nENG:");
    scanf("%d",&s5);
    printf("\nGUJ:");
    scanf("%d",&s6);
    printf("\nBA:");
    scanf("%d",&s7);
    
    sum=s1+s2+s3+s4+s5+s6+s7;
    printf("\nTotal Marks:%d",sum);
    
    per=sum*100/700;
    printf("\nPercentage:%f",per);
    
    if(per>=80)
    {
        printf("\nDistinction");
    }
    else if(per>=70)
    {
        printf("\nFirst");
    }
    else if(per>=60)
    {
        printf("\nSecond");
    }
    else if(per>=50)
    {
        printf("\nThird");
    }
    else if(per>=35)
    {
        printf("\nPass");
    }
    else if(per<35)
    {
        printf("\nFail!!");
    }
getch();
return 0;
}
