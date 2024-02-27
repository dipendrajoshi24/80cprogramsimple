#include <stdio.h>

void main() 
{
    int choice;
    double distance, fare;

    printf("Train Ticket Fare Calculator\n");
    printf("1. 1st AC\n");
    printf("2. 2nd AC\n");
    printf("3. 3rd AC\n");
    printf("4. Sleeper\n");
    printf("5. General\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter distance in kilometers: ");
    scanf("%lf", &distance);

    switch (choice) {
        case 1:
            fare = distance * 1.0; // Fare for 1st AC is 1 per km
            break;
        case 2:
            fare = distance * 2.0; // Fare for 2nd AC is 2 per km
            break;
        case 3:
            fare = distance * 3.0; // Fare for 3rd AC is 3 per km
            break;
        case 4:
            fare = distance * 4.0; // Fare for Sleeper is 4 per km
            break;
        case 5:
            fare = distance * 5.0; // Fare for General is 5 per km
            break;
        default:
            printf("Invalid choice\n");
            return 1; // Exit with error
    }

    printf("Your fare is: %.2lf\n", fare);
}

