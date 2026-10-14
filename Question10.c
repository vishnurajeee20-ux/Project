/*
   Requirement:
               1.Get an integer from the user.
               2.Count each digit using a function and an array.
               3.Display how many times each digit appears.
               
   Design (Algorithm):
                      1.Function: To count the digits.
                      2.Array: To store the frequency of each digit.
                      3.While loop: To separate the digits.
                      4.For loop and if condition: To display the digit counts.
   Output:                       
            Example 1: Enter an integer: 1223452
                        1 appears 1 times
                        2 appears 3 times
                        3 appears 1 times
                        4 appears 1 times
                        5 appears 1 times
                      
            
*/    

#include <stdio.h>

void countDigit(int n, int count[])
{
    int digit;

    while (n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }
}

int main()
{
    int n, i;
    int count[10] = {0};

    printf("Enter an integer: ");
    scanf("%d", &n);

    countDigit(n, count);

    for (i = 0; i < 10; i++)
    {
        if (count[i] > 0)
        {
            printf("%d appears %d times\n", i, count[i]);
        }
    }

    return 0;
}
