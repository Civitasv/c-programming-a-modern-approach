#include "stdio.h"

int main() {
    float loan, rate, payment;
    int count;

    printf("Enter amount of loan:");
    scanf("%f", &loan);

    printf("Enter interest rate:");
    scanf("%f", &rate);

    printf("Enter monthly payment:");
    scanf("%f", &payment);

    printf("Enter count of payment:");
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        float after_payment = loan - payment + loan * rate / 1200.f;
        printf("Balance remaining after payment: $%.2f\n", after_payment);
        loan = after_payment;
    }

    return 0;
}