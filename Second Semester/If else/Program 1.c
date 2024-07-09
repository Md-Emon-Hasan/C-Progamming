#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    if(number > 0)
    {
        printf("Number is positive");
    }
    if(number < 0)
    {
        printf("Number is negetive");
    }
    if(number == 0)
    {
        printf("Number is zero");
    }
    return 0;
}