/*
   Requirement:
                1.Get a number, starting bit position and number of bits.
                2.Extract the required bits using bitwise operators.
                3.Display the extracted value.
                
   Design (Algorithm):
                      1.Use >> to shift the required bits to the right.
                      2.Use & to select only the required bits.
                      3.Display the extracted number.
   Output:                       
            Example 1: Enter a number: 13
                       Enter starting position: 1
                       Enter number of bits: 2
                       Extracted value = 2
*/


#include <stdio.h>

int main()
{
    int num, pos, n, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter number of bits: ");
    scanf("%d", &n);

    result = (num >> pos) & ((1 << n) - 1);

    printf("Extracted value = %d\n", result);

    return 0;
}




