#include <stdio.h>

int main() {
    for (int j = 0; j < 3; j++) {
        for (int i = 1; i <= 9; i += 2) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}

