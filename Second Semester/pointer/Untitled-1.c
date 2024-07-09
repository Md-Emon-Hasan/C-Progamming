#include<stdio.h>
struct person
{
    int age;
    float salary;
};

int main()
{
    struct person person1, person2;

    person1.age = 20;
    person1.salary = 2600.500;

    printf("Age:%d\n",person1.age);
    printf("Salary:%f\n",person1.salary);

    return 0;
}