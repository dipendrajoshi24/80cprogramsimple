#include <stdio.h>

int main() {
    int numTickets, numMembers;
    char movieType;
    float ticketPrice, totalAmount, discountRate, discountedAmount, gstAmount;
    
    printf("Enter the number of tickets: ");
    scanf("%d", &numTickets);
    printf("Enter the movie type (2 for 2D, 3 for 3D): ");
    scanf(" %c", &movieType);
   
    // Calculating ticket price
    if (movieType == '2') {
        ticketPrice = 500;
    } else if (movieType == '3') {
        ticketPrice = 1000;
    } else {
        printf("Invalid movie type.\n");
        return 0;
    }
    
    // Calculating discount rate
    if (numMembers >= 1 && numMembers <= 5) {
        discountRate = 0.05;
    } else if (numMembers >= 6 && numMembers <= 10) {
        discountRate = 0.1;
    } else if (numMembers >= 11 && numMembers <= 20) {
        discountRate = 0.2;
    } else if (numMembers > 20) {
        discountRate = 0.3;
    } else {
        printf("Invalid number of members.\n");
        return 0;
    }
    
    // Calculating discounted amount
    discountedAmount = ticketPrice * numTickets * (1 - discountRate);
    
    // Calculating GST amount
    gstAmount = discountedAmount * 0.28;
    
    // Calculating total amount
    totalAmount = discountedAmount + gstAmount;
    
    // Output section
    printf("Total amount to pay: %.2f\n", totalAmount);
    
    return 0;
}

