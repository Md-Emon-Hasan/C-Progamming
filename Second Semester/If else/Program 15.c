#include<stdio.h>
int main()
{
    int physics;
    int chemistry;
    int biology;
    int mathmatics;
    int computer;
    int grade;
    printf("Enter Five subject number:");
    scanf("%d%d%d%d%d", &physics, &chemistry, &biology, &mathmatics, &computer);
    grade =(physics + chemistry + biology + mathmatics + computer)/5;
    
    if(grade >= 90){
        printf("Grade A");
    }
    else if(grade >= 80){
        printf("Grade B");
    }
    else if(grade >= 70){
        printf("Grade C");
    }
    else if(grade >= 60){
        printf("Grade D");
    }
    else if(grade >= 40){
        printf("Grade E");
    }
    else if(grade <= 40){
        printf("Grade F");
    }
}