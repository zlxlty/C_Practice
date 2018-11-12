/*
    Author: Tianyi Lu
    Coding: UTF-8
*/
#include <stdio.h>

static char daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int is_leap(int year)
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int day_of_year(int year, int month, int day)
{
    int i, leap;

    leap = is_leap(year);

    if (month > 0 && month <= 12 && day > 0 && day <= daytab[leap][month])
    {
        for (i = 1; i < month; i++)
            day += daytab[leap][i];

        return day;
    }
    else
    {
        printf("error: invalid month or day value\n");
        return -1;
    }
}

void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int  i, leap;

    leap = is_leap(year);

    if (yearday <= 365+leap && yearday > 0)
    {
        for (i = 1; yearday > daytab[leap][i]; i++)
            yearday -= daytab[leap][i];
        *pmonth = i;
        *pday = yearday;
    }
    else
    {
        printf("error: invalid yearday value\n");
        *pmonth = 0;
        *pday = 0;
    }
}

int main(int argc, char const *argv[]) {

    int yday, month, day;

    yday = day_of_year(2003, 4, 15);
    month_day(2003, yday, &month, &day);

    printf("Day:%d\n", yday);
    printf("Month:%d, Day:%d\n", month, day);

    return 0;
}
