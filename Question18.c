/*
   Requirement:
                1.Get a sentence containing multiple spaces.
                2.Replace consecutive spaces with a single space.
                3.Display the cleaned sentence.
                
   Design (Algorithm):
                      1.Use a character array to store the sentence.
                      2.Use a for loop and if condition to remove extra spaces.
                      3.Display the cleaned string.
   Output:                       
            Example 1: Enter a sentence: Hello    how   are    you?
                       Cleaned string: Hello how are you?
*/



#include <stdio.h>

int main()
{
    char str[200];
    int i, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' || str[i - 1] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("Cleaned string: %s", str);

    return 0;
}




