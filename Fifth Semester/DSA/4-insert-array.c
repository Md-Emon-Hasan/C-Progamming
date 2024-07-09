#include<stdio.h>
int main(){
    int arr[100];
    int num = 10;

    for (int i = 0; i < num; i++)
    {
        arr[i] = i + 1;
    }

    printf("original array: ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    int item = 50;
    int pos = 5;
    num++;

    for (int i = num - 1; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = item;   

    printf("after insertaion array: ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    int min = 0;
    int max = num;
    int middle;

    while (min <= max){
        middle = (min + max) / 2;
        if (arr[middle] == item)
        {
            printf("item found");
            // break;
        }
        else if (arr[middle] < item)
        {
            min = middle + 1;
        }
        else{
            max = middle - 1;
        }
    }
    printf("item not found");
    // return 0;
}