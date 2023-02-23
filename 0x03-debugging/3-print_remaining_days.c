/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    int remaining_days = 0;
    int is_leap_year = 0;

    // Check if the year is a leap year
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                is_leap_year = 1;
            }
        }
        else
        {
            is_leap_year = 1;
        }
    }

    // Calculate the number of remaining days in the year
    if (is_leap_year)
    {
        if (month > 2)
        {
            remaining_days = 366 - day;
        }
        else if (month == 2 && day == 29)
        {
            remaining_days = 0;
        }
        else
        {
            remaining_days = 365 - day;
        }
    }
    else
    {
        remaining_days = 365 - day;
    }

    if (remaining_days == 0)
    {
        printf("Day of the year: %d\n", day);
        printf("Happy New Year!!!\n");
    }
    else if (remaining_days < 0)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
    }
    else
    {
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", remaining_days);
    }
}
