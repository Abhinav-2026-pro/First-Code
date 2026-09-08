#include <stdio.h>

int main() 
{
    int arr[] = {-5, 12, 0, -8, 0, 7, -1, 15, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;

    for (int i = 0; i < size; i++) 
    {
        if (arr[i] > 0) 
        {
            positive_count++;
        } else if (arr[i] < 0) 
        {
            negative_count++;
        } else 
        {
            zero_count++;
        }
    }

    printf("Positive elements: %d\n", positive_count);
    printf("Negative elements: %d\n", negative_count);
    printf("Zero elements: %d\n", zero_count);

    return 0;
}