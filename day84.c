#include <stdio.h>

// Define the enum with SUCCESS, FAILURE, and TIMEOUT
typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

// Function to print messages based on the status
void print_status_message(Status status) {
    switch (status) {
        case SUCCESS:
            printf("[SUCCESS] Operation completed successfully!\n");
            break;
        case FAILURE:
            printf("[FAILURE] Operation failed. Please try again.\n");
            break;
        case TIMEOUT:
            printf("[TIMEOUT] Operation timed out. The response took too long.\n");
            break;
        default:
            printf("[UNKNOWN] Unrecognized status code.\n");
            break;
    }
}

int main() {
    // Testing different enum values
    Status current_status = SUCCESS;
    
    printf("Testing SUCCESS:\n");
    print_status_message(current_status);
    
    printf("\nTesting FAILURE:\n");
    current_status = FAILURE;
    print_status_message(current_status);
    
    printf("\nTesting TIMEOUT:\n");
    current_status = TIMEOUT;
    print_status_message(current_status);

    return 0;
}