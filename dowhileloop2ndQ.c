#include <stdio.h>

int main() {
    int num = 1;
    int sum = 0;

    do {
        sum += num; 
        num++;    
    } while (num <= 5);

    printf("The sum of the numbers from 1 to 5 is: %d\n", sum);

    return 0;
}

