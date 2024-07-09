#include<stdio.h>
int main()
{
    float centimeter;
    float meter;
    float kilometer;

    printf("enter centimeter:");
    scanf("%f",&centimeter);
    meter = centimeter/100;
    kilometer = centimeter/100000;
    printf("meter is %.4f\n", meter);
    printf("kilometer is %.4f\n", kilometer);

    return 0;
}
