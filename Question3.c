
/*
   Requirement:
               Get a positive integer from the user and calculate its factorial.
               Display the result, considering that the factorial of 0 is 1.
               
   Design (Algorithm):
                      1. Get a number from the user.
                      2. Multiply the numbers from 1 to the given number and
                         display the factorial.
   Output:                       
            Example 1:Enter a number:5   
                      Factorial = 120 
            
*/    

#include <stdio.h>

int main()
{
    int n, i;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);

    return 0;
}