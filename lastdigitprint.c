#include <stdio.h>
void main() 
{
    int num;

    printf("Enter a three_digit number: ");
    scanf("%d", &num);

    int last_digit = num % 10;

    switch (last_digit) {
        case 0:
            printf("Last digit: 0\n");
            break;
        case 1:
            printf("Last digit: 1\n");
            break;
        case 2:
            printf("Last digit: 2\n");
            break;
        case 3:
            printf("Last digit: 3\n");
            break;
        case 4:
            printf("Last digit: 4\n");
            break;
        case 5:
            printf("Last digit: 5\n");
            break;
        case 6:
            printf("Last digit: 6\n");
            break;
        case 7:
            printf("Last digit: 7\n");
            break;
        case 8:
            printf("Last digit: 8\n");
            break;
        case 9:
            printf("Last digit: 9\n");
            break;
        default:
            printf("Invalid input\n");
    }
}

