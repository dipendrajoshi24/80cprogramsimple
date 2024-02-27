#include <stdio.h>

int main() {
    float c, f, m, tot, avg;

    printf("Enter c program score: ");
    scanf("%f", &c);
    printf("Enter fit score: ");
    scanf("%f", &f);
    printf("Enter Math score: ");
    scanf("%f", &m);

    tot = c + f + m;
    avg = tot / 3;

    printf("Total score: %.2f\n", tot);
    printf("Average score: %.2f\n", avg);

    if (avg >= 90)
        printf("Grade: A\n");
    else if (avg >= 75 && avg < 90)
        printf("Grade: B+\n");
    else if (avg >= 60 && avg < 75)
        printf("Grade: B\n");
    else if (avg >= 40 && avg < 60)
        printf("Grade: B-\n");
    else
        printf("Grade: Failed\n");

    return 0;
}

