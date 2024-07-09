#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a alphabet:");
    scanf("%c",&ch);
    if((ch >= 'A') && (ch <= 'Z')){
        printf("This is uppercase alphabet");
    }
    else if((ch >= 'a') && (ch <= 'z')){
        printf("This is lowercase alphabet");
    }
    else{
        printf("This is not a alphabet character");
    }
}