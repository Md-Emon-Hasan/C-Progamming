#include<stdio.h>
int main()
{
    // conditional operator
    int a;
    int b;
    int c;
    int maximum;
    int minimum;

    printf("enter a number:");
    scanf("%d", &a);
    printf("enter a number:");
    scanf("%d", &b);
    printf("enter a number:");
    scanf("%d", &c);

    maximum = (a > b && a > c) ? a : (b > c) ? b : c;
    printf("maximum number is: %d\n", maximum);
    minimum = (a < b && a < c) ? a : (b < c) ? b :c;
    printf("minimum number is: %d", minimum);
}
