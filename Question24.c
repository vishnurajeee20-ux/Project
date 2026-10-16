/*
   Requirement:
               1.Get the array size and elements from the user.
               2.Remove duplicate elements from the array.
               3.Display the array with unique elements.
                
   Design (Algorithm):
                      1.Use nested for loops to find duplicates.
                      2.Shift elements left when a duplicate is found.
                      3.Display the updated array.
   Output:                       
            Example 1: Enter array size: 6
                       Enter array elements: 1 2 3 2 4 1
                       Array after removing duplicates: 1 2 3 4
*/

#include <stdio.h>

int main()
{
    int a[100], n, i, j, k;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n - 1; k++)
                    a[k] = a[k + 1];

                n--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}





