#include<stdio.h>
int main()
{
    double a;
    double result;

    printf("Enter any number:");
    scanf("%lf",&a);

    result = sqrt(a);
    printf("the number is: %.2lf", result);

    return 0;
}
