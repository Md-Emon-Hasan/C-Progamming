#include<stdio.h>
int main()
{
    float base;
    float height;
    float area;

    printf("enter base:");
    scanf("%f",&base);
    printf("enter height:");
    scanf("%f",&height);
    area = (base * height)/2;
    printf("area is %.1f square", area);

    return 0;
}
