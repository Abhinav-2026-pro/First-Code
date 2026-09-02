#include <stdio.h>

int main() 
{
    int i, j;
    int rows = 5;

    // Outer loop for the number of rows
    for (i = 1; i <= rows; i++) 
    {
        // Inner loop to print numbers in each row
        for (j = 1; j <= i; j++) 
        {
            printf("%d", j);
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}