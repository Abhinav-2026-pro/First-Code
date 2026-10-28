#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    FILE *file;

    // Ask the user for a filename
    printf("Enter the filename to open: ");
    if (scanf("%99s", filename) != 1) {
        printf("Error reading input.\n");
        return 1;
    }

    // Try to open the file in read mode ("r")
    file = fopen(filename, "r");

    // Check if the file pointer is NULL (file doesn't exist or cannot be opened)
    if (file == NULL) {
        perror("Error");
        return 1;
    }

    // Read and display its content character by character
    printf("\n--- File Content Start ---\n");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    printf("\n--- File Content End ---\n");

    // Close the file pointer
    fclose(file);

    return 0;
}