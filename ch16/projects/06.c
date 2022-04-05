#include "stdio.h"

struct date
{
    int month;
    int day;
    int year;
};

int compare_dates(struct date d1, struct date d2)
{
    if (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day)
        return 0;
    return d1.year > d2.year || d1.month > d2.month || d1.day > d2.day ? 1 : -1;
}

int main()
{
    struct date vals[2];
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &vals[0].month, &vals[0].day, &vals[0].year);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &vals[1].month, &vals[1].day, &vals[1].year);

    int flag = compare_dates(vals[0], vals[1]);
    if (flag == 0)
        printf("%d/%d/%d is the same as %d/%d/%d", vals[0].month,
               vals[0].day, vals[0].year, vals[1].month, vals[1].day,
               vals[1].year);
    else if (flag == -1)
        printf("%d/%d/%d is earlier than %d/%d/%d", vals[0].month,
               vals[0].day, vals[0].year, vals[1].month, vals[1].day,
               vals[1].year);
    else
        printf("%d/%d/%d is earlier than %d/%d/%d", vals[1].month,
               vals[1].day, vals[1].year, vals[0].month, vals[0].day,
               vals[0].year);
    return 0;
}