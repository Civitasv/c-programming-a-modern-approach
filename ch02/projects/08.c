#include <stdio.h>

int main() {
    float loan, rate, payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    float after_first_payment = loan - payment + loan * rate / 1200.0f;
    float after_second_payment = after_first_payment - payment + after_first_payment * rate / 1200.0f;
    float after_third_payment = after_second_payment - payment + after_second_payment * rate / 1200.0f;

    printf("Balance remaining after first payment: $%.2f\n", after_first_payment);
    printf("Balance remaining after second payment: $%.2f\n", after_second_payment);
    printf("Balance remaining after third payment: $%.2f\n", after_third_payment);

    return 0;
}