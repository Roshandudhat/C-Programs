//write a program to print alphabets of half pyramid.
/*
AAAAA
BBBB
CCC
DD
E
*/
#include<stdio.h>
int main()
{
    int i, j,n;
    printf("enter the print number");
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%c",'A'-1 + i);
        }
        printf("\n");
    }
}
