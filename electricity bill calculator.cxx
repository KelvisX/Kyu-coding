//Code for electricity bill calculation
#include <stdio.h>

int main() {
    int customerID;
    char customerName[50];
    float unitsConsumed, chargesPerUnit, totalBill, totalAmount;

    // Input customer details and units consumed
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);

    // Determine the charges per unit based on the units consumed
    if (unitsConsumed <= 199) {
        chargesPerUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        chargesPerUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        chargesPerUnit = 1.80;
    } else {
        chargesPerUnit = 2.00;
    }

    // Calculate the total bill
    totalBill = unitsConsumed * chargesPerUnit;

    // Add surcharge if the bill exceeds 400 Kshs
    if (totalBill > 400) {
        totalBill += totalBill * 0.15;  // 15% surcharge
    }

    // Ensure the minimum bill is 100 Kshs
    if (totalBill < 100) {
        totalBill = 100;
    }

    // Display the bill summary
    printf("\n--- Electricity Bill ---\n");
    printf("Customer ID        : %d\n", customerID);
    printf("Customer Name      : %s\n", customerName);
    printf("Units Consumed     : %.2f\n", unitsConsumed);
    printf("Charges per Unit   : %.2f\n", chargesPerUnit);
    printf("Total Amount to Pay: %.2f Kshs\n", totalBill);

    return 0;
}