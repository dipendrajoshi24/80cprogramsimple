#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern

    // Outer loop for each number from 5 to 1
    for (int i = rows; i >= 1; i--) {
        // Inner loop for printing each number 'i' according to its value
        for (int j = 1; j <= i; j++) {
            printf("%d ", i); // Print the current number
        }
        printf("\n"); // Move to the next line after printing each number 'i' times
    }

    return 0;
}
s
