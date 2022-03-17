#include <stdio.h>

int main() {
    int dollar;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollar);

    int _20_numbers = dollar/20;
    int _10_numbers = (dollar - 20*_20_numbers)/10;
    int _5_numbers = (dollar-20*_20_numbers-10*_10_numbers)/5;
    int _1_numbers = (dollar-20*_20_numbers-10*_10_numbers-5*_5_numbers);

    printf("$20 bills: %d\n", _20_numbers);
    printf("$10 bills: %d\n", _10_numbers);
    printf("$5 bills: %d\n", _5_numbers);
    printf("$1 bills: %d\n", _1_numbers);
    return 0;
}