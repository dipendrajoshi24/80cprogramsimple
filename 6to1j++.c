#include <stdio.h>

int main() {
    int i, j;

    for (j = 0; j < 10; j++) {
        for (i = 6; i >= 1; i--) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
