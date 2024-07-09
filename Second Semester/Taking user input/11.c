#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("Enter first angel:");
    scanf("%d",&a);
    printf("Enter second angel:");
    scanf("%d",&b);
    c = 180 - (a + b);
    printf("Third one is: %d", c);

    return 0;
}
