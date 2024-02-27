#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;
    
    printf("Enter an 11-digit number: ");
    scanf("%d", &number);
    
    if (number < 1000000000 || number > 9999999999) {
        printf("Please enter an 11-digit number.\n");
        return 1; 
    }
    
    do {
        remainder = number % 11;
        reversedNumber = reversedNumber * 11 + remainder;
        number /= 11;
    } while (number != 0);
    
    printf("Reversed number: %d\n", reversedNumber);
    printf("Thank You");
    return 0;
}
