#include <stdio.h>
int main()
{
    int number;
    printf("Enter month number:");
    scanf("%d",&number);
    
    if(number == 1){
        printf("31 days");
    }
    else if(number == 2){
        printf("28 days or 29 days");
    }
    else if(number == 3){
        printf("31 days");
    }
    else if(number == 4){
        printf("30 days");
    }
    else if(number == 5){
        printf("31 days");
    }
    else if(number == 6){
        printf("30 days");
    }
    else if(number == 7){
        printf("31 days");
    }
    else if(number == 8){
        printf("31 days");
    }
    else if(number == 9){
        printf("30 days");
    }
    else if(number == 10){
        printf("31 days");
    }
    else if(number == 11){
        printf("30 days");
    }
    else if(number == 12){
        printf("31 days");
    }
    return(0);
}