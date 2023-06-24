#include<stdio.h>

void main(void)
{
    int grade;
    printf("Enter the grade:");
    scanf("%d",&grade);

    if(grade>=85)
    {
        printf("Excellent");
    }
    else if(grade>=75)
    {
        printf("Very good");
    }
    else if(grade>=65)
    {
        printf("Good");
    }
    else if(grade >= 50)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
}