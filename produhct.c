#include <stdio.h>

void main() 
{
    int a = 10;
    int b = 5;
    int product, division;

    product = a * b;
    printf("Product of %d and %d is: %d\n", a, b, product);

 
    if (b != 0) {
        division = a / b;
        printf("Division of %d by %d is: %d\n", a, b, division);
    } else {
        printf("Cannot divide by zero!\n");
    }
}

