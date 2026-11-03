#include <stdio.h>

// Define the enum for traffic lights
typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLight;

int main() {
    // Test the enum with a RED light (change to YELLOW or GREEN to test others)
    TrafficLight currentLight = RED;

    // Print the corresponding action based on the enum value
    switch (currentLight) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid light\n");
    }

    return 0;
}