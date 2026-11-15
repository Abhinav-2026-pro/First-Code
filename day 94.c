#include <stdio.h>

// Define a structure for a Student
struct Student {
    char name[50];
    int age;
    float gpa;
};

// Function that accepts a pointer to a Student structure and prints its members
void printStudent(const struct Student *s) {
    printf("--- Student Details ---\n");
    printf("Name: %s\n", s->name);
    printf("Age:  %d\n", s->age);
    printf("GPA:  %.2f\n", s->gpa);
}

int main() {
    // Initialize a structure instance
    struct Student student1 = {"Alice Johnson", 20, 3.85};

    // Pass the address of the structure to the function
    printStudent(&student1);

    return 0;
}