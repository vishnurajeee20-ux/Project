/*
   Requirement:
               1.Get a decimal number and target base from the user.
               2.Convert the number into a base between 2 and 16 
                 using a function.
               3.Display the result using numbers and letters A–F when needed.
   Design (Algorithm):
                      1.Use a convert() function to convert the number.
                      2.Use a while loop and an array to store the remainders.
                      3.Use a for loop to print the result in reverse order.
   Output:                       
            Example 1: Enter a decimal number: 10
                       Enter the target base (2 to 16): 2
                       Converted number = 1010

*/    

#include <stdio.h>

void convert(int num, int base)
{
    char result[50];
    int i = 0;
    int rem;

    while (num > 0)
    {
        rem = num % base;

        if (rem < 10)
            result[i] = rem + '0';
        else
            result[i] = rem - 10 + 'A';

        num = num / base;
        i++;
    }

    printf("Converted number = ");

    for (i = i - 1; i >= 0; i--)
    {
        printf("%c", result[i]);
    }

    printf("\n");
}

int main()
{
    int num, num1;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Enter the target num1 (2 to 16): ");
    scanf("%d", &num1);

    if (num >= 2 && num1 <= 16 && num >= 0)
    {
        convert(num, num1);
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}

