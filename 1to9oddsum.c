#include <stdio.h>

int main() {
    int sum = 0;
    int i;

    for (i = 1; i <= 9; i += 2) {
        sum += i;
    }

    printf("The sum of odd numbers from 1 to 9 is: %d\n", sum);

    return 0;
}

