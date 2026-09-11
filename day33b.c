#include <stdio.h>

// Function to insert element into a sorted array
// Returns the new size of the array
int insertSorted(int arr[], int size, int capacity, int key) {
    // Check if space is available
    if (size >= capacity) {
        printf("Error: Array capacity reached. Cannot insert %d.\n", key);
        return size;
    }

    int i;
    // Shift elements to the right until the correct position for 'key' is found
    for (i = size - 1; (i >= 0 && arr[i] > key); i--) {
        arr[i + 1] = arr[i];
    }

    // Insert key at its sorted position
    arr[i + 1] = key;

    return size + 1;
}

int main() {
    int arr[10] = {10, 20, 30, 50, 60}; // Pre-allocated array
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int size = 5; // Current number of elements
    int key = 35; // Element to insert

    printf("Array before insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Perform insertion
    size = insertSorted(arr, size, capacity, key);

    printf("Array after inserting %d: ", key);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}