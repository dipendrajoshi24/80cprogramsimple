#include <stdio.h>

int main() {
    int n;

    // Number of rows to print
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int flag = 1; // Start with flag = 1

    for ( i=1; i <= n; i++) {
        for ( j = 1; j <= i; j++) {
            printf("%d ", flag);
            flag = !flag; // Toggle flag value (0 to 1 or 1 to 0)
        }
        printf("\n");

        // For each row, start with the opposite value of the last printed value
        flag = !flag;
    }

    return 0;
}

