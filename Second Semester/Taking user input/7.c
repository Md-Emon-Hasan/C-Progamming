#include<stdio.h>
int main()
{
    float celcius;
    float fahrenheit;

    printf("enter tempreture in fahrenheit:");
    scanf("%f", &celcius);
    celcius = (fahrenheit - 32) * 5 / 9;
    printf("celcius: %.2f\n", celcius);

    return 0;
}
