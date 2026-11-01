#include <stdio.h>
#include <stdlib.h>

// Define a structure to hold student details
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    FILE *file;
    int n, i;

    // Get the number of students from the user
    printf("Enter the number of students: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // 1. Open file in write mode ("w")
    file = fopen("students.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    // Input student records and write to file using fprintf()
    struct Student s;
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name (single word): ");
        scanf("%s", s.name);
        printf("Roll Number: ");
        scanf("%d", &s.roll_no);
        printf("Marks: ");
        scanf("%f", &s.marks);

        // Write formatted data to the file
        fprintf(file, "%s %d %.2f\n", s.name, s.roll_no, s.marks);
    }

    // Close the file after writing
    fclose(file);
    printf("\n--- Records successfully written to 'students.txt' ---\n\n");

    // 2. Open file in read mode ("r")
    file = fopen("students.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    // Display records
    printf("--- Reading Records from File ---\n");
    printf("%-20s %-15s %-10s\n", "Name", "Roll Number", "Marks");
    printf("--------------------------------------------------\n");

    // Read records using fscanf() until the end of the file
    while (fscanf(file, "%s %d %f", s.name, &s.roll_no, &s.marks) == 3) {
        printf("%-20s %-15d %-10.2f\n", s.name, s.roll_no, s.marks);
    }

    // Close the file after reading
    fclose(file);

    return 0;
}