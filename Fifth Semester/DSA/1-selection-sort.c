#include<stdio.h>
int main(){
    int a[] = {32,1,3,23,44,100,7};
    int min_index;
    int temp;
    for (int i = 0; i < 7; i++){
        min_index = i;
        for (int j = i + 1; j < 7; j++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
            }  
        }
        if (a[i] > a[min_index])
        {
            temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }
    for (int i = 0; i < 7; i++){
        printf("%d ",a[i]);
    }  
}