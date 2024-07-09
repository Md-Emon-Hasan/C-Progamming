#include <stdio.h>
int main() {
    char c;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    if ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u')){
        printf("%c is a vowel.", c);
    }
    else{
        printf("is a consonant.");
    }
    return (0);   
}
