
/*
   Requirement:
               1.Get two integers, starting bit position and number of bits.
               2.Replace the selected bits in the first number with bits
                 from the second number.
               3.Display the final result.
                
   Design (Algorithm):
                      1.Use bitwise operators to create a mask.
                      2.Clear the selected bits in the first number.
                      3.Insert the selected bits from the second number.
   Output:                       
            Example 1: Enter first number: 15
                       Enter second number: 2
                       Enter starting position: 1
                       Enter number of bits: 2
                       Result = 13
*/


#include <stdio.h>

int main()
{
    int a, b, pos, n, mask;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter number of bits: ");
    scanf("%d", &n);

    mask = (1 << n) - 1;

    a = a & ~(mask << pos);
    a = a | ((b & mask) << pos);

    printf("Result = %d\n", a);

    return 0;
}





