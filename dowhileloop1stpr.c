#include <stdio.h>

int main() {
    int num, remainder, sum = 0;

    printf("Enter a multiple number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    int temp = num;
    do {
        remainder = temp % 10; 
        sum += remainder;      
        temp /= 10;           
    } while (temp != 0);      

    printf("The sum of digits of %d is: %d\n", num, sum);
    return 0;
}

