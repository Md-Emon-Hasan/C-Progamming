#include<stdio.h>
int main()
{
    int sides1;
    int sides2;
    int sides3;
    printf("Enter triangle sides value: ");
    scanf("%d%d%d", &sides1, &sides2, &sides3);
    
    if((sides1 == sides2) && (sides2 == sides3)){
        printf("triangle is equilateral");
    }
    else if((sides1 == sides2) || (sides2 == sides3)){
        printf("triangle is isosceles");
    }
    else{
        printf("triangle is scalene");
    }
    return(0);
}