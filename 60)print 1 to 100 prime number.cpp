//write a program to print 1 to 100 prime number.
#include <stdio.h>  
int main()  
{  
    int ct=0,n=0,i=1,j=1;  
    while(n<25)  
    {  
        j=1;  
        ct=0;  
        while(j<=i)  
        {  
            if(i%j==0)  
            ct++;  
            j++;   
        }  
        if(ct==2)  
        {  
            printf("%d\t",i);  
            n++;  
        }  
        i++;  
	}  
}   
