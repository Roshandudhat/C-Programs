//write a program to print inverted half pyramid of
/*
* * *
* *
*
*/
#include <stdio.h>  
#include <conio.h>  
int main()  
{  
    int i, j, rows;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i=rows;i>0;i--)
    {  
        for (j=i;j>0;j--)
        {  
            printf ("*");
        }  
        printf ("\n");   
    }  
    getch();      
}  
