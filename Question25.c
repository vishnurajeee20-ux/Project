/*
   Requirement:
               1.Get the array size and elements from the user.
               2.Find the second largest and second smallest distinct
                 values without sorting.
               3.If all elements are the same, display an appropriate message.
                
   Design (Algorithm):
                      1.Use an array to store the numbers.
                      2.Use loops and conditions to find the required values.
                      3.Display the second largest and second smallest values.
   Output:                       
            Example 1: Enter array size: 5
                       Enter array elements: 10 15 20 25 30 35 
                       Second smallest = 15 
                       Second largest = 25
*/


#include <stdio.h>

int main()
{
    int a[100], n, i;
    int small, large, secondSmall, secondLarge;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    small = large = a[0];
    secondSmall = secondLarge = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] < small)
            small = a[i];

        if (a[i] > large)
            large = a[i];
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] > small &&
            (secondSmall == small || a[i] < secondSmall))
            secondSmall = a[i];

        if (a[i] < large &&
            (secondLarge == large || a[i] > secondLarge))
            secondLarge = a[i];
    }

    if (secondSmall == small || secondLarge == large)
        printf("Second largest or smallest does not exist\n");
    else
    {
        printf("Second smallest = %d\n", secondSmall);
        printf("Second largest = %d\n", secondLarge);
    }

    return 0;
}




