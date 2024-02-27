#include <stdio.h>

int main() {
    int num = 1;
    int sum = 0;

    do {
        sum += num; 
        num++;    
    } while (num <=5);

    printf("The sum of the odd numbers from 1 to 9 is: %d\n", sum);

    return 0;
}

