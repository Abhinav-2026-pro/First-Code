#include <stdio.h>


int findMostFrequentDigit(long long num) {
    int count[10] = {0}; // Array to store frequency of digits 0-9

    // Handle negative numbers
    num = llabs(num);

    // Special case for zero
    if (num == 0) {
        return 0;
    }

    // Extract digits and count frequencies
    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with the maximum frequency
    int maxDigit = 0;
    int maxCount = count[0];

    for (int i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    return maxDigit;
}

int main() {
    long long number = 12233344445;

    int mostFrequent = findMostFrequentDigit(number);
    printf("Number: %lld\n", number);
    printf("Most frequent digit: %d\n", mostFrequent);

    return 0;
}