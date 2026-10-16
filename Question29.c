/*
   Requirement:
              1.Get the array size and elements from the user.
              2.Move all negative numbers before positive numbers,
                treating zero as positive.
              3.Preserve the original order of both groups and display 
                the rearranged array.
                
   Design (Algorithm):
                     1.Use two arrays to store and rearrange the elements.
                     2.Use for loops and if conditions to separate negative and
                       non-negative numbers.
                     3.Display the rearranged array in its original group order.
   Output:                       
            Example 1: 
                       Enter array size: 6
                       Enter array elements: 4 -2 0 -5 3 -1
                       Rearranged array: -2 -5 -1 4 0 3
*/


#include <stdio.h>

int main()
{
    int a[100], b[100], n, i, j = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
            b[j++] = a[i];
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] >= 0)
            b[j++] = a[i];
    }

    printf("Rearranged array: ");
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}





