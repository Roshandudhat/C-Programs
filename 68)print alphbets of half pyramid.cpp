//write a program to print alphbets of half pyramid.
/*
A
B B
C C C
D D D D
E E E E E
*/
#include<stdio.h>
int main()
{
    int i, j,n;
    printf("enter the print number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",'A'-1 + i);
        }
        printf("\n");
    }
}
