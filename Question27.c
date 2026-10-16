/*
   Requirement:
              1.Get the sizes and elements of two sorted arrays from the user.
              2.Merge both arrays into a third array without using a sorting function.
              3.Display the merged array in ascending order.
                
   Design (Algorithm):
                     1.Use arrays and loops to read the elements.
                     2.Compare elements from both arrays using if-else.
                     3.Copy the remaining elements and display the merged array.
   Output:                       
            Example 1: Enter size of first array: 4
                       Enter first array elements: 1 3 5 7
                       Enter size of second array: 3
                       Enter second array elements: 2 4 6
                       Merged array: 1 2 3 4 5 6 7
                       
*/

#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n1, n2, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first array elements: ");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second array elements: ");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    i = 0;
    j = 0;
    k = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n1)
        c[k++] = a[i++];

    while (j < n2)
        c[k++] = b[j++];

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);

    return 0;
}






