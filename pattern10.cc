#include <stdio.h>

int main() {
    int rows = 5; 
    int i, j;

    for (i = 0; i < rows; i++) {
        
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("1 ");

        
        for (j = 3; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}

