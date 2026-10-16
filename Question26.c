/*
   Requirement:
               1.Get the array elements, number of positions, and rotation 
                 direction from the user.
               2.Rotate the array to the left or right.
               3.Display the rotated array.
                
   Design (Algorithm):
                      1.Use an array and for loop to read the elements.
                      2.Use if-else to select the rotation direction.
                      3.Use the modulus (%) operator to handle positions 
                        larger than the array size.
   Output:                       
            Example 1: Enter array size: 5
                       Enter array elements: 1 2 3 4 5
                       Enter positions to rotate: 2
                       Enter direction (L/R): R
                       4 5 1 2 3
                       
*/


#include <stdio.h>

int main()
{
    int a[100], n, i, pos;
    char dir;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter positions to rotate: ");
    scanf("%d", &pos);

    printf("Enter direction (L/R): ");
    scanf(" %c", &dir);

    pos = pos % n;

    if (dir == 'L' || dir == 'l')
    {
        for (i = 0; i < n; i++)
            printf("%d ", a[(i + pos) % n]);
    }
    else if (dir == 'R' || dir == 'r')
    {
        for (i = 0; i < n; i++)
            printf("%d ", a[(i - pos + n) % n]);
    }
    else
        printf("Invalid direction");

    return 0;
}





