#include <stdio.h>

void main() {
    int numTickets;
    float totalBill;

    printf("Enter the number of tickets purchased: ");
    scanf("%d", &numTickets);

    if (numTickets >= 1 && numTickets <= 5) {
        totalBill = numTickets * 500;
    } else {
        totalBill = numTickets * 400;
    }

    printf("Total bill: rup%.2f\n", totalBill);
}

