//write a program to used abs() in math.
#include <stdio.h>  
#include <stdlib.h>  // use stdlib.h header file to use abs() function.  
  
int main()  
{  
    int num, n; 
    printf (" Enter a number to display the absolute value: ");  
    scanf ("%d", &num);
    n = abs (num);  
    printf ("\n The absolute value of %d is %d. ", num, n);  
    return 0;  
}  
