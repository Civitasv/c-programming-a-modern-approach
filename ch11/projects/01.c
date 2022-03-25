#include <stdio.h>

void pay_amount(int, int *, int *, int *, int *);

int main() {
    int dollar;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollar);

    int _20_numbers;
    int _10_numbers;
    int _5_numbers;
    int _1_numbers;

    pay_amount(dollar, &_20_numbers, &_10_numbers, &_5_numbers, &_1_numbers);

    printf("$20 bills: %d\n", _20_numbers);
    printf("$10 bills: %d\n", _10_numbers);
    printf("$5 bills: %d\n", _5_numbers);
    printf("$1 bills: %d\n", _1_numbers);
    return 0;
}

void pay_amount(int dollar, int *twenties, int *tens, int *fives, int *ones) {
    *twenties = dollar / 20;
    *tens = (dollar - 20 * *twenties) / 10;
    *fives = (dollar - 20 * *twenties - 10 * *tens) / 5;
    *ones = (dollar - 20 * *twenties - 10 * *tens - 5 * *fives);
}