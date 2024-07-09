#include<stdio.h>
int main(){
    int num;
     
    printf("enter array length: ");
    scanf("%d",&num);

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        printf("enter array element: ");
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < num; i++)
    {
        printf("you entered [%d]: [%d]\n",i,arr[i]);
    }

    int item;
    
    printf("enter array you want to search: ");
    scanf("%d",&item);
    printf("\n");
    
    int min = 0;
    int max = num;
    int middle;

    while (min <= max)
    {
        if (arr[middle] > item)
        {
            max = middle - 1;
        }
        else if (arr[middle] <  item){
            min = middle + 1;
        }
        else{
            printf("array found at index: [%d]",middle);
            return 0;
        }
    }
    
    if (min > max)
    {
        printf("array not found");
    }
    
}