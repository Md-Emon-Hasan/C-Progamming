#include<stdio.h>
int main()
{
    int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i;

    for ( i = 0; i < 10; i++)
    {
        printf("%d th array = %d\n", i + 1, array[i]);
    }
    
    return 0;
}