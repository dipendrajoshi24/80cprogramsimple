#include <stdio.h>

void main() 
{
    int 2,3 ;
    floatt bill_amount, tax_rate;

    printf("Enter the memebers: ");
    scanf("%d", &rate);

    printf("Enter 2 for 2 d or 3 for 3 d : ");
    scanf("%d", &connection_type);

    if (2d_type == 2) { 
        if (rate <= 100)
            bill_amount = units * 7;
        else if (units <= 3000)
            bill_amount = 100 * 7 + (units - 100) * 5;
        else
            bill_amount = 100 * 7 + 2900 * 5 + (units - 3000) * 10;
    } else if (connection_type == 2) { 
        if (units <= 100)
            bill_amount = units * 7;
        else if (units <= 3000)
            bill_amount = 100 * 7 + (units - 100) * 10;
        else
            bill_amount = 100 * 7 + 2900 * 10 + (units - 3000) * 27;
    } else {
        printf("Invalid connection type\n");
        return 1;
    }
    
    tax_rate =12%;
    bill_amount += bill_amount * tax_rate;
    
    printf("Total electricity bill: rup%.2f\n", bill_amount);
}
d
