#include <stdio.h>

void main() 
{
    int num, originalNum, remainder, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;
    while (num != 0) {
        remainder = num % 10;
        sum += remainder * remainder * remainder;
        num /= 10;
    }

    if (originalNum == sum) {
        printf("%d is an same number.\n", originalNum);
    } else {
        printf("%d is not an same number.\n", originalNum);
    }
}

