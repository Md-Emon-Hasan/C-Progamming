#include<stdio.h>
int main()
{
    char sign;
    double number1;
    double number2;
    printf("Enter a sign:");
    scanf("%c", &sign);
    printf("Enter two number:");
    scanf("%lf %lf", &number1, &number2);

    switch (sign)
    {
    case '+':
        printf("%0.1lf + %0.1lf = %0.1lf", number1, number2, number1+number2);
        break;
    
    case '-':
        printf("%0.1lf - %0.1lf = %0.1lf", number1, number2, number1-number2);
        break;

    case '*':
        printf("%0.1lf * %0.1lf = %0.1lf", number1, number2, number1*number2);
        break;

    case '%':
        printf("%0.1lf / %0.1lf = %0.1lf", number1, number2, number1/number2);
        break;
    
    default:
        break;
    }
}