#include <stdio.h>

void main()
 {
    int number, digit, sum = 0;

    // Input from the user
    printf("Enter a multiple-digit number: ");
    scanf("%d", &number);

    // Calculate sum of digits using a while loop
    while (number != 0) {
        digit = number % 10; // Extract the last digit
        sum += digit; // Add the digit to the sum
        number /= 10; // Remove the last digit
    }

    // Display the sum of digits
    printf("Sum of digits: %d\n", sum);
}
