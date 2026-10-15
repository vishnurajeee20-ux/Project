/*
   Requirement:
               1.Get an integer from the user.
               2.Convert its digits into characters and store them in a string.
               3.Preserve the negative sign and display the string.
               
   Design (Algorithm):
                      1.Use a character array to store digits.
                      2.Use a do-while loop to extract digits.
                      3.Use a for loop to print digits in the correct order.
   Output:                       
            Example 1: Enter a number: 123
                            123
*/


#include <stdio.h>

int main()
{
    int num, i = 0, rem;
    char str[20];

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        str[i++] = '-';
        num = -num;
    }

    int start = i;

    do
    {
        rem = num % 10;
        str[i++] = rem + '0';
        num = num / 10;
    } while (num > 0);

    str[i] = '\0';

    for (int j = i - 1; j >= start; j--)
        printf("%c", str[j]);

    printf("\n");

    return 0;
}


