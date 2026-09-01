#include <stdio.h>

int main() 
{
    int rows = 5;
    int cols = 5;

    // Outer loop for rows
    for (int i = 0; i < rows; i++) 
    {
        // Inner loop for columns
        for (int j = 0; j < cols; j++) {
            printf("*");
        }
        // Move to the next line after printing 5 stars
        printf("\n");
    }

    return 0;
}