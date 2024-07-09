#include<stdio.h>
int main()
{
    char ch;
    printf("enter a alphabet:");
    scanf("%ch", &ch);
    (ch >= 'a' && ch >= 'z') || (ch >= 'A' && ch>= 'Z') ? printf("this is alphabet") : printf("this is not a alphabet");
}
