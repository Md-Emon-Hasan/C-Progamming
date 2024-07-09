#include <stdio.h>
int main()
{
    int angel1;
    int angel2;
    int angel3;
    int sum;
    
    printf("enter three value of triangle:");
    scanf("%d%d%d", &angel1, &angel2, &angel3);
    sum = angel1 + angel2 + angel3;
    
    if((sum == 180) && (angel1 > 0) && (angel2 > 0) && (angel3 > 0)){
        printf("triangle is valid");
    }
    else{
        printf("triangle is invalid");
    }
    return(0);
}