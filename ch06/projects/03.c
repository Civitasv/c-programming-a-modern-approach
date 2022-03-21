#include "stdio.h"
int gcd(int a, int b);

int main(){
    int numerator, denom;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denom);

    int gcd_val = gcd(numerator, denom);

    printf("In lowest terms: %d/%d", numerator/gcd_val, denom/gcd_val);

    return 0;
}

int gcd(int a, int b){
    while (a != 0) {
        int temp = a;
        a = b % a;
        b = temp;
    }

    return b;
}