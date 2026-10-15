/*
   Requirement:
                1.Get a sentence from the user.
                2.Check whether all 26 English letters appear at least once.
                3.Display whether the sentence is a pangram.
                
   Design (Algorithm):
                      1.Use an array to track the letters.
                      2.Use loops and tolower() to check uppercase and
                        lowercase letters.
                      3.Use if-else to display the result.
   Output:                       
            Example 1: Enter a sentence: The quick brown fox jumps over the lazy dog
                         Pangram
*/


#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[200];
    int i, count = 0;
    int letters[26] = {0};

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z')
            letters[ch - 'a'] = 1;
    }

    for (i = 0; i < 26; i++)
    {
        if (letters[i] == 1)
            count++;
    }

    if (count == 26)
        printf("Pangram\n");
    else
        printf("Not a pangram\n");

    return 0;
}




