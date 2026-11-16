#include <stdio.h>
#include <string.h>

// Define the Student structure
typedef struct {
    int id;
    char name[50];
    float gpa;
} Student;

// Function to find and return the top student by value
Student getTopStudent(Student students[], int size) {
    Student top = students[0];
    
    for (int i = 1; i < size; i++) {
        if (students[i].gpa > top.gpa) {
            top = students[i];
        }
    }
    
    return top; // Returns a copy of the top Student structure
}

int main() {
    // Initialize an array of students
    Student classList[] = {
        {101, "Alice Johnson", 3.8},
        {102, "Bob Smith", 3.95},
        {103, "Charlie Brown", 3.6},
        {104, "Diana Prince", 3.9}
    };
    
    int size = sizeof(classList) / sizeof(classList[0]);
    
    // Call the function and store the returned structure
    Student topStudent = getTopStudent(classList, size);
    
    // Display the results
    printf("--- Top Student Details ---\n");
    printf("ID:   %d\n", topStudent.id);
    printf("Name: %s\n", topStudent.name);
    printf("GPA:  %.2f\n", topStudent.gpa);
    
    return 0;
}