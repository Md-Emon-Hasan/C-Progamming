#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet:");
    scanf("%c",&ch);

    switch(ch)
        {
            case 'a':
            printf("This is vowel");
            break;

            case 'e':
            printf("This is vowel");
            break;

            case 'i':
            printf("This is vowel");
            break;

            case 'o':
            printf("this is vowel");
            break;
            
            case 'u':
            printf("This is vowel");
            break;

            default:
            printf("This is constant");
        }
    return 0;
}