#include "stdio.h"

int main() {
    int first_date_year, first_date_month, first_date_day;
    int second_date_year, second_date_month, second_date_day;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &first_date_month, &first_date_day, &first_date_year);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &second_date_month, &second_date_day, &second_date_year);

    int flag = first_date_year < second_date_year || first_date_month < second_date_month ||
               first_date_day < second_date_day;
    if (flag)
        printf("%d/%d/%d is earlier than %d/%d/%d", first_date_month, first_date_day, first_date_year,
               second_date_month, second_date_day, second_date_year);
    else
        printf("%d/%d/%d is earlier than %d/%d/%d", second_date_month, second_date_day, second_date_year,
               first_date_month, first_date_day, first_date_year);

    return 0;
}