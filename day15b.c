#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop until the number becomes 0
    while (num != 0) {
        remainder = num % 10;          // Extract the last digit
        reversed = reversed * 10 + remainder; // Shift left and add digit
        num /= 10;                     // Remove the last digit
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}