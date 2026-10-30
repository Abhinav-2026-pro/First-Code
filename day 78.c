#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    int ch; // Use int to properly handle EOF
    int vowels = 0, consonants = 0;

    // Get the filename from the user
    printf("Enter the filename: ");
    if (scanf("%99s", filename) != 1) {
        printf("Error reading filename.\n");
        return 1;
    }

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file '%s'\n", filename);
        return 1;
    }

    // Read character by character until the End of File (EOF)
    while ((ch = fgetc(file)) != EOF) {
        // Check if the character is an alphabet letter (A-Z, a-z)
        if (isalpha(ch)) {
            char lower_ch = tolower(ch);
            
            // Check if it's a vowel
            if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || 
                lower_ch == 'o' || lower_ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        // Digits and special characters are ignored by isalpha()
    }

    // Close the file
    fclose(file);

    // Display the results
    printf("\n--- File Analysis Results ---\n");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}