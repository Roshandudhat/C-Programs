//C language program 
#include<stdio.h>
#include<conio.h>
case 9:
        
        
				
        	printf(".....menu.....\n");
	        printf("1.strlen. string\n");
	        printf("2.strcpy. string\n");
	        printf("\n");
	        
	        
	        printf("select any option");
	        scanf("%d",&ch);
	        switch(ch)
	        {
	        	case 1:
	        		char str[50];
                	int len;
                	strcpy(str,"welcome to sabargarm collage");
                	len=strlen(str);
                	printf("Length of |%s| is |%d| \n",str,len);
                    break;
                    
                case 2:
               	    char src[40];
	                char dest[100];
	                memset(dest,'\0',sizeof(dest));
	                strcpy(src,"HELLO FRIENDS");
	                strcpy(dest,src);
	                printf("final copied string:%s\n",dest);
                    break;
			}
			
#include<string.h>
case 7:
			  
            {  
                int n=2,i,choice;  
                do  
                {  
                 i=1;  
                while(i<=10)  
                {  
                printf("%d X %d = %d\n",n,i,n*i);  
                i++;  
                }  
                printf("do you want to continue with the table of %d , enter any non-zero value to continue.",n+1);  
                scanf("%d",&choice);  
                if(choice == 0)  
                {  
                break;  
                }  
                n++;  
                }while(1);
				 break;  
            }
#include<math.h>

int main()
{
	int choice,number=0,i=1,b=9,n,k=1,r,c;
	
	int a[r][c]; 
	printf("find answes\n");
	printf(".....menu.....\n");
	printf("1. Hello world\n");
	printf("2. if and else program \n");
	printf("3. do whlie loop \n");
	printf("4. while loop \n");
	printf("5. for loop\n");
	printf("6. nestedn loops all\n");
	printf("7. break and continue statement with multification table in loop\n");
	printf("8. goto statememt\n");
	printf("9. string program\n");
	
	
	printf("select any option\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 
            printf("Hello world \n");  
	        break;
	        
	    case 2:
	    	
	        printf(".....menu.....\n");
	        printf("1. odd and even number \n");
	        printf("2. find the largest number of the three\n");
	        printf("3. check whether a person is eligible to vote or not\n");
	        printf("4. calculate the grade with student markes \n");
	        
	        printf("select any option:-");
	        scanf("%d",&choice);
	        switch(choice)
	        {
	        	case 1:
	        	   
                    printf("enter a number:");    
                    scanf("%d",&number);     
                    if(number%2==0){    
                    printf("%d is even number",number);    
                    }    
                    else{    
                    printf("%d is odd number",number);    
                    } 
				    break;   
					
				case 2:
				    {  
                    int a, b, c;   
                    printf("Enter three numbers?");  
                    scanf("%d %d %d",&a,&b,&c);  
                    if(a>b && a>c)  
                    {  
                    printf("%d is largest",a);  
                    }  
                    if(b>a  && b > c)  
                    {  
                    printf("%d is largest",b);  
                    }  
                    if(c>a && c>b)  
                    {  
                    printf("%d is largest",c);  
                    }  
                    if(a == b && a == c)   
                    {  
                    printf("All are equal");   
                    }  
                    }  	
                    break;
                
                case 3:
                	int age;   
                    printf("Enter your age?");   
                    scanf("%d",&age);  
                    if(age>=18)  
                    {  
                    printf("You are eligible to vote...");   
                    }  
                    else   
                    {  
                    printf("Sorry ... you can't vote");   
                    } 
					break;
					
			    case 4: 
                    {  
                    int marks;   
                    printf("Enter your marks?");  
                    scanf("%d",&marks);   
                    if(marks > 85 && marks <= 100)  
                    {  
                    printf("Congrats ! you scored grade A ...");   
                    }  
                    else if (marks > 60 && marks <= 85)   
                    {  
                    printf("You scored grade B + ...");  
                    }  
                    else if (marks > 40 && marks <= 60)   
                    {  
                    printf("You scored grade B ...");  
                    }  
                    else if (marks > 30 && marks <= 40)   
                    {  
                    printf("You scored grade C ...");   
                    }  
                    else   
                    {  
                    printf("Sorry you are fail ...");   
                    }  
                    break;
                    
                default: 
				{
                    printf(" sorry.number is not valid.");    
                }
			    }
			}
			
		case 3:
		
	        printf(".....menu.....\n");
	        printf("1.print a table of 1\n");
	        printf("2.print table of the given number \n");
	        
	        
	        printf("select any option");
	        scanf("%d",&choice);
	        switch(choice)
	        {
	        	case 1:
	        		      
                     do{    
                    printf("%d \n",i);    
                    i++;    
                    }while(i<=10);   
                    
                    break;
                    
                case 2:
                	  
                    printf("Enter a number: ");    
                    scanf("%d",&number);    
                    do{    
                    printf("%d \n",(number*i));    
                     i++;    
                    }while(i<=10);    
                    break;
                    default: 
				{
                    printf(" sorry.number is not valid.\n");    
                }
					
                    
			}
		
		case 4:
			printf(".....menu.....\n");
	        printf("1.print a table of 1 \n");
	        printf("2.print table for the given number\n");
	        
	        
	        printf("select any option:-");
	        scanf("%d",&choice);
	        switch(choice)
	        {
	        	case 1:
	        		while(i<=10){      
                    printf("%d \n",i);      
                    i++;      
                    }
                    break;
                    
                case 2:
                	    
                    printf("Enter a number: ");    
                    scanf("%d",&number);    
                    while(i<=10){    
                    printf("%d \n",(number*i));    
                    i++;    
                    } 
					break;
					
					default: 
				    {
                        printf(" sorry.number is not valid.\n");    
                    }
						
					 
           	}
			   
		case 5:    
		    printf(".....menu.....\n");
	        printf("1.print a table of 1 \n");
	        printf("2.print table for the given number\n");
	        
	        
	        printf("select any option:-");
	        scanf("%d",&choice);
	        switch(choice)
	        {
	        	case 1:
	        		for(i=1;i<=10;i++){      
                    printf("%d \n",i);      
                    }   
					break; 
					
			    case 2:
			    	printf("Enter a number: ");    
                    scanf("%d",&number);    
                    for(i=1;i<=10;i++){      
                    printf("%d \n",(number*i));    
                    } 
					break;  
						default: 
				    {
                    printf(" sorry.number is not valid.\n");    
                    } 
                    
			}
			
		case 6:
			printf(".....menu.....\n");
	        printf("1.Nested for loop \n");
	        printf("2.Nested while loop \n");
	        printf("3.Nested do..while loop\n");
	        
	        
	        printf("select any option:-\n");
	        scanf("%d",&choice);
	        switch(choice)
	        {
	           case 1:
			        printf("Enter the value of n :");
					scanf("%d",&n);  
                    for(int i=1;i<=n;i++)
                    {  
                    for(int j=1;j<=10;j++)
                    printf("%d\t",(i*j));
                    }  
                    printf("\n");  	
	        		
	        		break;
	        		
	        	case 2:
	        	     
                    printf("Enter the number of rows :"); 
                    scanf("%d",&r);  
                    printf("\nEnter the number of columns :");  
                    scanf("%d",&c);  
                     
                    while(i<=r) 
                    {  
                    int j=1;  
                    while(j<=c)  
                    {  
                     printf("%d\t",k);  // printing the value of k.  
                     k++;   // increment counter  
                    j++;  
                    }  
                    i++;  
                    printf("\n");  
                    }
                   break;
				
				case 3:
				    do           // outer loop  
                    {  
                    int j=1;  
                    do       // inner loop  
                    {  
                    printf("*");  
                    j++;  
                    }while(j<=8);  
                    printf("\n");  
                    i++;  
                    }while(i<=4);  
                    break;
                default: 
				    {
                    printf(" sorry.number is not valid.\n");    
                    }
                    
           	}
			    case 8:
        	{  
            int num,i=1;   
            printf("Enter the number whose table you want to print?");   
            scanf("%d",&num);  
            table:   
            printf("%d x %d = %d\n",num,i,num*i);  
            i++;  
            if(i<=10)  
            goto table;    
            }  
            break;
				   		
	    
	    
		
		
		
		
		
	}
}
