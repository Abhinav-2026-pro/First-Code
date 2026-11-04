#include <stdio.h>

// Define an enum for the months of the year (starting from 1)
enum Month {
    JANUARY = 1, FEBRUARY, MARCH, APRIL, 
    MAY, JUNE, JULY, AUGUST, 
    SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int main() {
    // Array storing the number of days in each month (non-leap year)
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    // Array of strings to print the month names
    const char *monthNames[] = {
        "January", "February", "March", "April", 
        "May", "June", "July", "August", 
        "September", "October", "November", "December"
    };

    printf("Number of Days in Each Month:\n");
    printf("-----------------------------\n");

    // Loop through the enum values
    for (int i = JANUARY; i <= DECEMBER; i++) {
        // Using i - 1 because array indices start at 0
        printf("%-10s : %d days\n", monthNames[i - 1], daysInMonth[i - 1]);
    }

    return 0;
}