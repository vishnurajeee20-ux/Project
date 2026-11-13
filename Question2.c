/*
   Requirement:
               The program gets an integer from the user and checks whether it
               is a prime number. It displays whether the number is
               prime or not prime.
               
   Design (Algorithm):

                      1.Get an integer from the user using scanf().
                      2.Use an if-else statement and a for loop to check 
                        how many numbers divide it exactly.
                      3.If the number has exactly two divisors, display 
                        Prime number; otherwise, display Not a prime number.
   Output:                       
            Example 1:Enter a number:5   Example 2:Enter a number:6
                      Prime number                 Not a prime number
            
*/    

#include <stdio.h>

int main()
{
    int num, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2)
    {
        printf("Not a prime number");
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("Prime number");
        }
        else
        {
            printf("Not a prime number");
        }
    }

    return 0;
}