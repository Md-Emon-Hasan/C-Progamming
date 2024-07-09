#include<stdio.h>
int main()
{
    int days;
    int week;
    int year;

    printf("Enter a days:");
    scanf("%d", &days);
    year = days / 365;
    week = (days % 365) / 7;
    days = days - ((year * 365) + (week * 7));
    printf("Year %d\n",year);
    printf("Week %d\n",week);
    printf("Days %d\n",days);

    return 0;
}
