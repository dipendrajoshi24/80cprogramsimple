#include <stdio.h>

int main() {
    int a, b, c;
    float average;

    printf("Enter the grades for subjects A, B, and C respectively: ");
    scanf("%d %d %d", &a, &b, &c);

    average = (a + b + c) / 3.0;

    printf("Average Grade: %.2f\n", average);

    if (a < 40 || b < 40 || c < 40) {
        printf("Failed\n");
    }

    return 0;
}

