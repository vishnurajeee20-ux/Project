/*
   Requirement:
              1.Get two positive integers from the user.
              2.Find their GCD using a recursive function.
              3.Display the GCD using the main() function
               
   Design (Algorithm):
                     1.Function: To calculate the GCD of two numbers.
                     2.Recursion: To call the same function repeatedly.
                     3.If-else: To check whether the second number is zero.
                     4.Modulus operator (%): To find the remainder.
   Output:                       
            Example 1: Enter two positive integers: 12 8
                             GCD = 4
                      
            
*/    



#include <stdio.h>

int gcd(int vishnu, int raj)
{
    if (raj == 0)
        return vishnu;
    else
        return gcd(raj,vishnu % raj);
}

int main()
{
    int vishnu,raj;

    printf("Enter two positive integers: ");
    scanf("%d %d", &vishnu, &raj);

    printf("GCD = %d", gcd(vishnu, raj));

    return 0;
}

