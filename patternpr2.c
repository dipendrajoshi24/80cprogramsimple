#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the pattern
    int i, j, count = 2;

    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", count);
            count++;
        }
        count -= i;
        printf("\n");
    }

    return 0;
}

