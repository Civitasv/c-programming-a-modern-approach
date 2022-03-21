#include "stdio.h"

int main() {
    int input_date_year, input_date_month, input_date_day;
    int earliest_date_year, earliest_date_month, earliest_date_day;
    printf("Enter a date (mm/dd/yy):");
    scanf("%d/%d/%d", &earliest_date_month, &earliest_date_day, &earliest_date_year);

    for (;;) {
        printf("Enter a date (mm/dd/yy):");
        scanf("%d/%d/%d", &input_date_month, &input_date_day, &input_date_year);
        if (input_date_day == 0 && input_date_year == 0 && input_date_month == 0)
            break;
        int flag = input_date_year < earliest_date_year || input_date_month < earliest_date_month ||
                   input_date_day < earliest_date_day;
        if (flag) {
            earliest_date_year = input_date_year;
            earliest_date_month = input_date_month;
            earliest_date_day = input_date_day;
        }
    }

    printf("%.2d/%.2d/%.2d is the earliest date", earliest_date_month, earliest_date_day, earliest_date_year);

    return 0;
}