/*
   Requirement:
                1.Get a string from the user.
                2.Convert uppercase letters into lowercase.
                3.Display the modified string.
                
   Design (Algorithm):
                      1.Use a character array to store the string.
                      2.Use a for loop and if condition to check uppercase letters.
                      3.Add 32 to convert uppercase ASCII letters to lowercase.
   Output:                       
            Example 1: Enter a string: Hello WORLD 123!
                       Lowercase string: hello world 123!
*/



#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("Lowercase string: %s", str);

    return 0;
}

