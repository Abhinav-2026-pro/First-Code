#include <stdio.h>
#include <stdlib.h>

int main() {
    // Specify the filename (make sure the file exists or change the name)
    const char *filename = "example.txt";

    // Open the file in append mode ("a")
    // This creates the file if it doesn't exist, and preserves existing content if it does.
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char buffer[256];
    printf("Enter a new line of text to append: ");

    // Read the text from standard input safely using fgets
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        // Write the text to the file
        fprintf(file, "%s", buffer);
        printf("Successfully appended text to '%s'.\n", filename);
    } else {
        printf("Error reading user input.\n");
    }

    // Always close the file pointer when done
    fclose(file);

    return 0;
}