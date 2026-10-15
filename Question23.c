/*
   Requirement:
               1.Get two integers, starting bit position and number of bits.
               2.Swap the selected bits between the two numbers.
               3.Display both modified numbers.
                
   Design (Algorithm):
                      1.Use a mask to select the required bits.
                      2.Clear the selected bits in both numbers.
                      3.Insert the exchanged bits using bitwise operators.
   Output:                       
            Example 1: Enter two numbers: 10 12
                       Enter starting position: 1
                       Enter number of bits: 2
                       First number after swap = 12
                       Second number after swap = 10
*/


#include <stdio.h>

int main()
{
    int a, b, pos, n, x, y, mask;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter number of bits: ");
    scanf("%d", &n);

    mask = (1 << n) - 1;

    x = (a >> pos) & mask;
    y = (b >> pos) & mask;

    a = a & ~(mask << pos);
    b = b & ~(mask << pos);

    a = a | (y << pos);
    b = b | (x << pos);

    printf("First number after swap = %d\n", a);
    printf("Second number after swap = %d\n", b);

    return 0;
}





