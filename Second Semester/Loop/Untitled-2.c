#include<stdio.h>
int main()
{
    int i;
    int n;

    for ( i = 1; i <= 10; i++)
    {
        for ( n = 1; n <= 10; n++)
        {
            printf("%d * %d =%d\n", i, n, n*i);
        }
    }
    return 0;
}
