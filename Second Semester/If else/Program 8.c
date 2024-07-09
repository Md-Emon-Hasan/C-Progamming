#include <stdio.h>
int main()
{
    int number;
    printf("Enter Week number:");
    scanf("%d",&number);
    if(number == 1){
        printf("Saturday");
    }
    else if(number == 2){
        printf("Sunday");
    }
    else if(number == 3){
        printf("Monday");
    }
    else if(number == 4){
        printf("Tuesday");
    }
    else if(number == 5){
        printf("Wednesday");
    }
    else if(number == 6){
        printf("Thrusday");
    }
    else if(number == 7){
        printf("Friday");
    }
}