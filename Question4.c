/*
   Requirement:
               The program gets an integer from the user and checks whether it
               is divisible by 2. It displays whether the number is even or odd.
               
   Design (Algorithm):
                     1.Ues an integer from the user using scanf().
                     2.Use the("if-else") statement and (%)operator to check
                       whether the number is divisible by 2.
                    3.Display Even number if the remainder is 0;
                      otherwise, display Odd number.
   Output:                       
            Example 1:Enter a number:10    Example 2:Enter a number:9
                      Even number               Odd number
            
*/    

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }

    return 0;
}