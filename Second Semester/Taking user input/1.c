#include<stdio.h>
int main()
{
    int number1;
    int number2;
    int sum;

    printf("Enter first number:");
    scanf("%d",&number1);
    printf("enter second number:");
    scanf("%d",&number2);
    sum = number1 + number2;
    printf("%d + %d = %d", number1, number2, sum);

    return 0;
}
