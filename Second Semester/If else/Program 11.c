#include<stdio.h>
int main()
{
    int sides1;
    int sides2;
    int sides3;
    printf("Enter triangle sides value:");
    scanf("%d%d%d", &sides1, &sides2, &sides3);
    
    if((sides1 + sides2 > sides3) && (sides1 + sides3 > sides2) && (sides2 + sides3 > sides1)){
        printf("triangle is valid");
    }
    else("triangle is invalid");
}