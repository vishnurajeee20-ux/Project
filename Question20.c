
/*
   Requirement:
                1.Get a number, starting bit position and number of bits.
                2.Toggle the specified consecutive bits.
                3.Display the modified number.
                
   Design (Algorithm):
                      1.Use a for loop to select each bit.
                      2.Use << to select the bit and ^ to toggle it.
                      3.Print the final number.
   Output:                       
            Example 1: Enter a number: 10
                       Enter starting bit position: 1
                       Enter number of bits: 2
                       Result = 12
*/


#include <stdio.h>

int main()
{
    int num, pos, n, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter starting bit position: ");
    scanf("%d", &pos);

    printf("Enter number of bits: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        num = num ^ (1 << (pos + i));
    }

    printf("Result = %d\n", num);

    return 0;
}



