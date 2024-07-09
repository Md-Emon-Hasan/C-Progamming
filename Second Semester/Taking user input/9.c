#include<math.h>
#include<stdio.h>
int main()
{
    double x;
    double y;
    double result;

    printf("Enter a base number:");
    scanf("%lf",&x);
    printf("Enter a power number:");
    scanf("%lf",&y);

    result = pow(x,y);
    printf("result is: %.2lf^%.2lf = %.2lf", x, y, result);

    return 0;
}
