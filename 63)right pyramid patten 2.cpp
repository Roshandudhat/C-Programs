//write a program to print right side in pyramid of.
/*
*
* *
* * *
*/
#include <stdio.h>  
#include <conio.h>  
int main()  
{  
    int i, j, rows;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);  
    printf("\n");  
    for (i = 1; i <= rows; ++i) 
    {  
        for (j = 1; j <= i; ++j)  
        {  
            printf ("* ");  
        }  
        printf ("\n");   
    }  
    getch();      
}  
