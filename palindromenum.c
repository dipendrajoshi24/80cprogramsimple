#include <stdio.h>

void main()
{
    int number, reversedNum = 0, remainder, originalNum;

    printf("Enter an integer: ");
    scanf("%d", & num);

    originalNumber = number;

    while (number != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum)
        printf("%d is a palindrome.\n", originalNum);
    else
        printf("%d is not a palindrome.\n", originalNum);
}

