#include<stdio.h>
int main()
{
    int number;
    printf("Enter any number:");
    scanf("%d",&number);

    switch (number % 2)
    {
    case 0:
        printf("Number is even");
        break;

    case 1:
        printf("number is odd");
        break;
    }
    return 0;
}