#include <stdio.h>

int main() {
    int arr[] = {12, 34, 56, 78, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    // Iterate through the array and accumulate the sum
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nSum of array elements: %d\n", sum);

    return 0;
}