#include<stdio.h>
#include<math.h>
int main()
{
    int bangla;
    int english;
    int math;
    int physics;
    int biology;
    int total;
    int average;
    int percentage;

    printf("enter bangla marks:");
    scanf("%d",&bangla);
    printf("enter english marks:");
    scanf("%d",&english);
    printf("enter math marks:");
    scanf("%d",&math);
    printf("enter math physics:");
    scanf("%d",&physics);
    printf("enter biology marks:");
    scanf("%d",&biology);

    total = (bangla + english + math + physics + biology);
    average = (bangla + english + math + physics + biology) / 5;
    percentage = (total / 500 ) * 100;

    printf("total: %d\n", total);
    printf("average: %d\n", average);
    printf("percentage: %d\n", percentage);

}
