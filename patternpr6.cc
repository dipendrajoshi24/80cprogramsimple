#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern

    // Outer loop for each number from 5 to 1
    for (int i = 5; i <= rows; i++) {
        // Inner loop for printing the number 'i' repeatedly
        for (int j = 1; j <= i; j++) {
            printf("%d ", i); // Print the current number 'i'
        }
        printf("\n"); // Move to the next line after printing 'i' repeatedly
    }

    return 0;
}

