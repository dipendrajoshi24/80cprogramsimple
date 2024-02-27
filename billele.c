#include <stdio.h>

void main()
 {
    int units, connection_type;
    float bill_amount, tax_rate;

    printf("Enter the units consumed: ");
    scanf("%d", &units);

    printf("Enter 1 for domestic connection or 2 for commercial connection: ");
    scanf("%d", &connection_type);

    if (connection_type == 1) { 
        if (units <= 100)
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

    tax_rate =12;
    bill_amount += bill_amount * tax_rate;

    printf("Total electricity bill: rup%.2f\n", bill_amount);
}

