#include <stdio.h>

int main() 
{
    int n;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) 
    {
        printf("Error: Please enter a non-negative integer.\n");
        return 1;
    }

    // Factorial of 0 is 1
    for (int i = 1; i <= n; ++i) 
    {
        factorial *= i;
    }

    printf("Factorial of %d = %llu\n", n, factorial);

    return 0;
}