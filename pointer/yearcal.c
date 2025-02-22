#include <stdio.h>
int main()
{
    int days, year, week, day;
    printf("Enter number of days: ");
    scanf("%d", &days);

    void yearcalculator(int days, int *year, int *week, int *day);
    yearcalculator(days, &year, &week, &day);
    printf("%d year, %d week, %d day\n", year, week, day);

    return 0;
}

void yearcalculator(int days, int *year, int *week, int *day)
{
    *year = days / 365 ;
    int remaining_days = days - (*year * 365) ;
    *week = remaining_days / 7;
    *day = remaining_days % 7;
}
