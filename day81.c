#include <stdio.h>

// Define the enumeration for days of the week
enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    // Array of strings to map enum constants to their name representations
    const char* dayNames[] = {
        "SUNDAY",
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY"
    };

    printf("Days of the week and their integer values:\n");
    printf("-----------------------------------------\n");

    // Loop through the enumeration values from SUNDAY to SATURDAY
    for (int i = SUNDAY; i <= SATURDAY; i++) {
        printf("%-10s : %d\n", dayNames[i], i);
    }

    return 0;
}