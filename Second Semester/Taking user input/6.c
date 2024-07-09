#include<stdio.h>
int main()
{
    float celcius;
    float fahrenheit;

    printf("enter tempreture in celcius:");
    scanf("%f", &celcius);
    fahrenheit = (celcius * 9 / 5) + 32;
    printf("fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
