#include <stdio.h>

int main() {
    int rows, cols;

    // 1. Get the dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare the matrix with the given dimensions (Variable Length Array)
    int matrix[rows][cols];

    // 2. Read elements into the matrix
    printf("\nEnter elements for the %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Print the matrix
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d \t", matrix[i][j]);
        }
        printf("\n"); // Move to the next row after printing a full line
    }

    return 0;
}