/*
   Requirement:
                1.Get a string from the user.
                2.Reverse the characters using a loop.
                3.Display the reversed string.
   Design (Algorithm):
                      1.Use strlen() to find the string length.
                      2.Use a for loop and a temporary variable 
                        to swap characters.
                      3.Print the reversed string.
   Output:                       
            Example 1: Enter a string: hello
                       Reversed string = olleh
                          
*/


#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;
    int i, len;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    printf("Reversed string = %s\n", str);

    return 0;
}


