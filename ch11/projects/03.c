#include "stdio.h"

int gcd(int, int);

void reduce(int, int, int *, int *);

int main()
{
    int numerator, denom, reduced_numerator, reduced_denominator;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denom);

    int gcd_val = gcd(numerator, denom);
    reduce(numerator, denom, &reduced_numerator, &reduced_denominator);

    printf("In lowest terms: %d/%d", reduced_numerator, reduced_denominator);

    return 0;
}

int gcd(int a, int b)
{
    while (a != 0)
    {
        int temp = a;
        a = b % a;
        b = temp;
    }

    return b;
}

void reduce(int numerator, int denominator,
            int *reduced_numerator,
            int *reduced_denominator)
{
    int gcd_val = gcd(numerator, denominator);

    *reduced_numerator = numerator / gcd_val;
    *reduced_denominator = denominator / gcd_val;
}