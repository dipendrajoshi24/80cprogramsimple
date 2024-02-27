#include <stdio.h>

int main() {
	int i,j;
    for (intj = 1; j < 10; j++) {
        for (int i = 9; i <= 1; i += 2) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}

