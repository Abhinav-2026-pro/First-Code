#include <stdio.h>

int main() 
{
    int arr[] = {45, 12, 89, 3, 67, 24};
    int size = sizeof(arr) / sizeof(arr[0]);

    
    int max = arr[0];
    int min = arr[0];


    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
        if (arr[i] < min) 
        {
            min = arr[i];
        }
    }

    printf("Array elements: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    printf("\nMaximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}