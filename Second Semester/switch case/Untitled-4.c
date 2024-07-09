#include<stdio.h>
int main()
{
    int number1;
    int number2;
    
    printf("Enter two number:");
    scanf("%d%d", &number1, &number2);

    switch (number1 > number2)
    {
    case 0:
        printf("Second number is larger then First number");
        break;

    case 1:
        printf("First number is larger then Second number");
        break;
    }
    return 0;
}