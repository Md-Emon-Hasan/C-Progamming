// linear search
#include<stdio.h>
int main(){
    int a[] = {-3,4,1,88,5,7};
    int searchItem = 7;
    int i;
    for (int i = 0; i < 6; i++)
    {
        if (a[i] == searchItem)
        {
            printf("item found at index: %d\n",i);
            return 0;
        }
    }
    printf("item no found.");
}