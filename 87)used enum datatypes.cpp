//write a program to enum datatypes.
#include <stdio.h>  
enum weekdays{Sunday=1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};  
int main()  
{  
	enum weekdays w; 
 	w=Monday; 
 	printf("The value of w is %d",w);  
    return 0;  
}  
