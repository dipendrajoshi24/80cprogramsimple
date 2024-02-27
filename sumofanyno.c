#include <stdio.h>

void main()
 {
    int number, digit, sum = 0;

    printf("Enter a multiple-digit number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10; 
        sum += digit; 
        number /= 10; 
    }

    printf("Sum of digits: %d\n", sum);
}
