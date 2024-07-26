//program 45:-write a program to logical opreter.
#include<stdio.h>
#include<conio.h>
int main()
{ 
    int age; 
    printf (" Enter the age: ");  
    scanf (" %d", &age);     
    if ( age >= 13 && age <= 19)   
    {  
        printf (" %d is a teenager age. ", age);  
    }  
    else  
    {  
        printf (" %d is not a teenager age. ", age);  
    }  
      
    return 0; 

}
