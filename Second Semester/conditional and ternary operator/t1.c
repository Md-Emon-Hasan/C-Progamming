#include<stdio.h>
int main()
{
    int year;
    printf("enter a year");
    scanf("%d",&year);
    (year % 4 == 0 && year %100!=0) ? printf("this year is leap year") : (year % 400 == 0) ? printf("this year is leap year") : printf("not a leap year");
}
