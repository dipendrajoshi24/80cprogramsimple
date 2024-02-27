#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern

    // Outer loop for each number from 1 to 5
    for (int i = 1; i <= rows; i++) {
        // Inner loop for printing each number 'i' five times
        for (int j = 1; j <= 5; j++) {
            printf("%d ", i); // Print the current number
        }
        printf("\n"); // Move to the next line after printing each number five times
    }

    return 0;
}

