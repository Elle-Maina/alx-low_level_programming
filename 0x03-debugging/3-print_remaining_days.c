#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - This prints how many days there are out of a date
 * left in the year, taking leap years into account
 * @month: Shows the month in number format
 * @day: Shows the day of month
 * @year: Shows the year
 * Return: Shows the void
 */
void print_remaining_days(int month, int day, int year)
{
if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
{
if (month > 2 && day >= 60)
{
day++;
}
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
if (month == 2 && day == 60)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
}
else
{
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}
