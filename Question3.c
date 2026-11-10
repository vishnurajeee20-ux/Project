/*
   Requirement:
               To write a C program to print a pyramid of stars for a 
               given number of rows.
               
   Design (Algorithm):
                     1.Get the number of rows from the user.
                     2.Use nested "for" loops to print spaces and stars in each
                       row.
                     3.Print a new line after each row.  
                       
   Output:                       
            *
           ***
          *****
         *******
        ********* 
*/    

#include <stdio.h>

int main()
{
    int n,i,j;
    
    printf("enter n:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("");
        }    
        for(j=1;j<=2*i-1;j++)
        {
          printf("*");
        }  
          printf("\n");
    }
    return 0;
}