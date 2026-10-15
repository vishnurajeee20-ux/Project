/*
   Requirement:
               1.Get a string from the user.
               2.Check whether it reads the same forward and backward.
               3.Display whether it is a palindrome or not.
               
   Design (Algorithm):
                      1.Use strlen() to find the string length.
                      2.Use a for loop and if condition to compare characters.
                      3.Display the result using if-else.
   Output:                       
            Example 1: Enter a string: madam , Example 2:Enter a string: hello
                          Palindrome                    Not a palindrome
                          
*/



#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, flag = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}


