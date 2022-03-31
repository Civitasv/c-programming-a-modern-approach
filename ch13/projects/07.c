#include "stdio.h"

int main()
{
    int number;

    char *first[] = {"one", "two",
                     "three", "four", "five",
                     "six", "seven", "eight", "nine"};
    char *second[] = {
        "",
        "twenty",
        "thirty",
        "forty",
        "fifty",
        "sixty",
        "seventy",
        "eighty",
        "ninty"};
    char *special[] = {
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "ninteen"};

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    if (number / 10 == 1)
        printf("You entered the number %s", special[number % 10]);
    else
    {
        if (number % 10 == 0)
            printf("You entered the number %s", second[number / 10 - 1]);
        else
            printf("You entered the number %s-%s", second[number / 10 - 1], first[number % 10 - 1]);
    }
    return 0;
}