/*
   Requirement:
               1.Get a positive integer from the user.
               2.Find the sum of its proper divisors using a function.
               3.Check whether the sum equals the given number.
               
   Design (Algorithm):
                     1.Function: To find the sum of proper divisors and
                       return the result.
                     2.For loop: To check the divisors of the number.
                     3.If-else: To check divisibility and display whether 
                       the number is perfect or not
   Output:                       
            Example 1: Enter a positive integer: 6
                         6 is a Perfect Number
                      
            
*/    



#include <stdio.h>

int perfect(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (perfect(n))
        printf("%d is a Perfect Number", n);
    else
        printf("%d is not a Perfect Number", n);

    return 0;
}
