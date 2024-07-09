#include<stdio.h>
int main()
{
    int length;
    int breadth;
    int perimeter;
    int area;

    printf("enter length:");
    scanf("%d",&length);
    printf("enter breadth:");
    scanf("%d",&breadth);
    perimeter = 2*(length + breadth);
    printf("perimeter is:%d\n",perimeter);
    area = length*breadth;
    printf("area is:%d square\n",area);

    return 0;
}
