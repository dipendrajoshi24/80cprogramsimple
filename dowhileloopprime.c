#include <stdio.h>

int main() {
    int num, i = 2;
    int isPrime = 1; 
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 2) {
        printf("1 and numbers less than 1 are not prime numbers.\n");
        return 0;
    }
    
    do {
        if (num % i == 0) {
            isPrime = 0; 
            break;
        }
        i++;
    } while (i <= num / 2); 
    
    if (isPrime == 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
        printf("Thank You ");
    
    return 0;
}

