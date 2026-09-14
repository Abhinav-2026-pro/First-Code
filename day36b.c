#include <stdio.h>

int main() 
{
    int rows, cols, sum = 0;

    // 1. Get the dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare the matrix
    int matrix[rows][cols];

    // 2. Read elements and accumulate the sum
    printf("\nEnter elements for the %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add each element to the running sum
        }
    }

    // 3. Print the matrix
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }

    // 4. Display the total sum
    printf("\nThe sum of all elements in the matrix is: %d\n", sum);

    return 0;
}