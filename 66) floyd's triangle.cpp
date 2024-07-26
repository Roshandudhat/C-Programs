//write a program to floyd's triangle.
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include <stdio.h>  
#include <conio.h>  
int main()  
{  
    int i, j, rows, k = 1;  
    printf (" Enter a number to define the rows: \n ");  
    scanf("%d", &rows);   
    printf("\n");  
    for (i = 1; i <= rows; i++)   
    {  
        for (j = 1; j <= i; j++)   
        {  
            printf("%d ", k);   
            k += 1;  
        }  
        printf("\n");  
    }  
    getch();      
}  
