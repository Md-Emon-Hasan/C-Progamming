#include <stdio.h>

int main()
{
    int a,b, profit; 
    
    printf("Enter cost price: ");
    scanf("%d", &a);
    printf("Enter selling price: ");
    scanf("%d", &b);
    
    if(b > a)
    {
        profit = b - a;
        printf("Profit = %d", profit);
    }
    else if(a > b)
    {
        profit = a - b;
        printf("Loss = %d", profit);
    }
    else
    {
        printf("No Profit No Loss.");
    }

    return 0;
}