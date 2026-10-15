/*
   Requirement:
               1.Get a number from the user as a string.
               2.Convert each digit into an integer using a loop.
               3.Display the final integer value.
               
   Design (Algorithm):
                     1.Use a character array to store the input.
                     2.Use a for loop to process each character.
                     3.Use arithmetic operators to convert the string
                       into an integer.
   Output:                       
            Example 1: Enter a number as a string: 1234
                       Integer value = 1234
*/



#include <stdio.h>

int main()
{
    char str[20];
    int num = 0;
    int i;

    printf("Enter a number as a string: ");
    scanf("%19s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        num = num * 10 + (str[i] - '0');
    }

    printf("Integer value = %d\n", num);

    return 0;
}
