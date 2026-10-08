/*
   Requirement:
               To find the second largest element in an integer arry without 
               sorting the arry.
               
   Design (Algorithm):
                     1.Initialize"largest" and "second" with arry elements.
                     2.Use a "for" loop and "if-else" conditions to find
                       the largest and second largest element.
                       
   Output:                       
          second largest=15.
          
*/



#include <stdio.h>

int secondLargest(int arr[], int size)
{
    int largest = arr[0];
    int second = arr[1];

    if (second > largest)
    {
        int vishnu = largest;
        largest = second;
        second = vishnu;
    }

    for (int i = 2; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second)
        {
            second = arr[i];
        }
    }

    return second;
}

int main()
{
    int arr[] = {5, 10, 15, 20, };
    int size = 5;

    int result = secondLargest(arr, size);

    printf("Second largest element = %d", result);

    return 0;
}


