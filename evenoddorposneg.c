#include <stdio.h>

void main()
 {
    int choice, num;

    printf("Enter your choice:\n");
    printf("1. Check if a number is even or odd.\n");
    printf("2. Check if a number is positive or negative.\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            if(num % 2 == 0)
                printf("%d is even.\n", num);
            else
                printf("%d is odd.\n", num);
            break;
        case 2:
            printf("Enter a number: ");
            scanf("%d", &num);
            if(num > 0)
                printf("%d is positive.\n", num);
            else if(num < 0)
                printf("%d is negative.\n", num);
            else
                printf("The number is zero.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
}

