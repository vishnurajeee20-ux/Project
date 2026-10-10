/*
   Requirement:
               Get the number of terms from the user and display the Fibonacci
               series starting from 0 and 1.
               
   Design (Algorithm):
                      1. Get the number of terms from the user.
                      2. Add the previous two numbers and print the series
                         up to the given number of terms.
   Output:                       
            Example 1:  Enter the number of terms: 7
                            0 1 1 2 3 5 8 
                      
            
*/    

#include <stdio.h>

int main()
{
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}