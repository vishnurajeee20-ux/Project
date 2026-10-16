/*
   Requirement:
              1.Get the array size, elements, and target sum from the user.
              2.Find and display all pairs whose sum equals the target.
              3.Display a message if no matching pairs are found.
                
   Design (Algorithm):
                     1.Use an array to store the elements.
                     2.Use nested for loops to check all possible pairs.
                     3.Use an if condition to check the sum and a variable to
                       track whether a pair is found.
   Output:                       
            Example 1: 
                       Enter array size: 5
                       Enter array elements: 2 4 3 5 7
                       Enter target sum: 7
                       2 + 5 = 7
                       4 + 3 = 7
*/


#include <stdio.h>

int main()
{
    int a[100], n, i, j, target, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == target)
            {
                printf("%d + %d = %d\n", a[i], a[j], target);
                found = 1;
            }
        }
    }

    if (found == 0)
        printf("No pairs found");

    return 0;
}





