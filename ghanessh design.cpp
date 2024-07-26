#include<stdio.h>

int main()
{


  {
    printf("\033[05:32m");
    printf("\n\t\t ");
    int n=8;
    for(int i = 1; i <= n; i++) 
    {
    for(int j = 1; j <= n-i; j++)
    {
    printf(" ");
    }
    for(int j = i; j <2*i; j++)
    {
    printf("?");
    }
    for(int j = 1; j <= i-1; j++)
    {
    printf("?");
    }
    printf("\n\t\t ");
    }
    }
    
    
    // for head and ears //
    
    {
    printf("\n");
    printf("\033[05;33m");
    printf("\033[05;31m");
    printf("\033[05;31m\t#######");
    printf("\033[05;33m  @@@@@@@@@@@@@@@");
    printf("\033[05;31m  #######\n");
    printf("\033[05;31m\t ######");
    printf("\033[05;33m  @@@@@@@@@@@@@@@");
    printf("\033[05;31m  ######\n");
    printf("\033[05;31m\t  #####");
    printf("\033[05;33m  @@");
   printf("\033[05;37m©©");
    printf("\033[05;33m@@@@@@@");
    printf("\033[05;37m©©");
    printf("\033[05;33m@@  ");  
    printf("\033[05;31m#####\n");
    printf("\033[05;31m\t   #### ");
    printf("\033[05;33m @@");
    printf("\033[05;37m©©");
    printf("\033[05;33m@@@@@@@");
    printf("\033[05;37m©©");
    printf("\033[05;33m@@");
    printf("\033[05;31m  ####\n");
    printf("\033[05;31m\t    ### ");
    printf("\033[05;33m @@@@@@@@@@@@@@@  ");
    printf("\033[05;31m###\n");
    printf("\033[05;31m\t     ## ");
    printf("\033[05;33m @@@@@@@@@@@@@@@  ");
    printf("\033[05;31m##\n");
    printf("\033[05;31m\t      # "); 
    printf("\033[05;33m @@@@@@@@@@@@@@@  ");
    printf("\033[05;31m#\n");
    
    //For Mouth//
    
    printf("\t\n\t");
    printf("\033[05;37m");
    printf("\033[05;37m\t +++");
    printf("\033[05;33m@@@@@@@@"); 
    printf("\033[05;37m+++\n");
    printf("\033[05;37m\t         ++");
    printf("\033[05;33m  @@@@@@");
    printf("\033[05;37m  ++\n");
    printf("\033[05;33m\t\t      @@@@ ");
    printf("\033[05;37m    +\n");
    printf("\033[05;33m\t\t     @@@@\n");
    printf("\033[05;33m\t\t    @@@@\n");
    printf("\033[05;33m\t\t   @@@@\n");
    printf("\033[05;33m\t\t  @@@@\n");
    printf("\033[05;33m\t\t   @@@\n");
    printf("\033[05;33m\t\t    @@@\n");
    printf("\033[05;33m\t\t     @@@    @@\n");
    printf("\033[05;33m\t\t      @@@  @@@\n");
    printf("\033[05;33m\t\t        @@@@\n");
    
    //Text//
    
    printf("\033[01;32m");
    printf("\n\tJAY");
    printf("\033[05;31m");
    printf("\n\t   SHREE");
    printf("\033[05;33m");
    printf("\n\t\tGANESHA");
    
    //Creator//
    printf("\033[01;32m");
    printf("\n\n\tCREATER:-");
    printf("\033[01;32m");
    printf("\n\n\tPRASHANT");
    printf("\033[05;31m");
    printf("\n\t\tRAMESHBHAI");
    printf("\033[05;33m");
    printf("\n\t\t\t  BHARBHIDIYA");
    
    }
    return 0;
}
