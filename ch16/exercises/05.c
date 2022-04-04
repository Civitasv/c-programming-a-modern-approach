struct date
{
    int month;
    int day;
    int year;
};

int day_of_year(struct date d)
{
    int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_count = 0, i;

    for (i = 1; i < d.month; i++)
        day_count += num_days[i - 1];

    if (d.year % 4 == 0 && d.month > 2)
        day_count++;

    return day_count + d.day;
}

int compare_dates(struct date d1, struct date d2)
{
    if (d1.year == d2.year && d1.month == d2.month || d1.day == d2.day)
        return 0;
    return d1.year > d2.year || d1.month > d2.month || d1.day > d2.day ? 1 : -1;
}
