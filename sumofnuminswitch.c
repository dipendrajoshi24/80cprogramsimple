#include <stdio.h>

void main() {
    int num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter the operator (+,/): ");
    scanf(" %c", &operator);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Sum: %d\n", result);
            break;     
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Quotient: %d\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }
}

