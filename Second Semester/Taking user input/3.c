#include<stdio.h>
int main()
{
    float radius;
    float diameter;
    float circumference;
    float area;

    printf("enter radius:");
    scanf("%f",&radius);
    diameter = 2 * radius;
    circumference = 2 * 3.1416 * radius;
    area = 3.1416 * (radius * radius);
    printf("Diameter is:%.2f\n",diameter);
    printf("circumfrence is:%.2f\n",circumference);
    printf("area is:%.2f\n", area);

    return 0;
}
