#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourcePath[100], destPath[100];
    int ch;

    // Get source filename from the user
    printf("Enter the path of the source file: ");
    scanf("%s", sourcePath);

    // Get destination filename from the user
    printf("Enter the path of the destination file: ");
    scanf("%s", destPath);

    // Open source file in read mode ("r")
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file '%s'. Please check if it exists.\n", sourcePath);
        return 1;
    }

    // Open destination file in write mode ("w")
    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        printf("Error: Could not create or open destination file '%s'.\n", destPath);
        fclose(sourceFile); // Close source file before exiting
        return 1;
    }

    // Copy content character by character
    // fgetc() returns EOF (End of File) when it reaches the end of the source file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully from '%s' to '%s'!\n", sourcePath, destPath);

    // Close both files to free system resources
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}