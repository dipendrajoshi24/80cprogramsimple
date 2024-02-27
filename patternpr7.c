#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern
    int count = 1; // Initial value to print

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // Inner loop for printing the current number 'count' times
        for (int j = 1; j <= i; j++) {
            printf("%d ", count); // Print the current number
        }
        count += 2; // Increment count by 2 for the next iteration
        printf("\n"); // Move to the next line after printing each row
    }

    return 0;
}

