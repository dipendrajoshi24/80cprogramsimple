#include <stdio.h>

void main() 
{
    int num, reversed = 0, digit;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 999) {
        while (num != 0) {
            digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }

        printf("Reversed number: %d\n", reversed);
    } else {
        printf("Please enter a valid three-digit number.\n");
    }
}

