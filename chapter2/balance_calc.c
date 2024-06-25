//
// Created by pvnk1u on 2024/6/24.
// Page 25
//

#include <stdio.h>

int main(void) {
    float amount = 0.0f,
            rate = 0.0f,
            monthlyPayment = 0.0f;

    printf("Enter amount of loan: ");
    scanf("%f",&amount);
    printf("Enter interest rate: ");
    scanf("%f",&rate);
    printf("Enter monthly payment: ");
    scanf("%f",&monthlyPayment);

    amount = amount  - monthlyPayment + (amount * rate /100 /12);
    printf("Balance remaining after first payment: $%.2f\n",amount);
    amount = amount  - monthlyPayment + (amount * rate /100 /12);
    printf("Balance remaining after second payment: $%.2f\n",amount);
    amount = amount  - monthlyPayment + (amount * rate /100 /12);
    printf("Balance remaining after third payment: $%.2f\n",amount);
}