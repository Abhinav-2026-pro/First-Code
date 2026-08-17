#include <stdio.h>

int main() {
    char ch;

    // Input character from user
    printf("Enter any character: ");
    scanf("%c", &ch);

    // Check classification using ASCII ranges
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an UPPERCASE alphabet.\n", ch);
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a LOWERCASE alphabet.\n", ch);
    } 
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a DIGIT.\n", ch);
    } 
    else {
        printf("'%c' is a SPECIAL CHARACTER.\n", ch);
    }

    return 0;
}