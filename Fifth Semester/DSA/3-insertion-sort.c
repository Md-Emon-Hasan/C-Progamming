#include<stdio.h>
int main(){
    int a[] = {8,4,1,3,2};
    for (int i = 1; i < 5; i++)
    {
        int value = a[i];
        int hole = i;
        while (hole > 0 && a[hole - 1] > value)
        {
            a[hole] = a[hole - 1];
            hole--;
        }
        a[hole] = value;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    
}