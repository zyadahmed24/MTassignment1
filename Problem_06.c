#include<stdio.h>

void main(void)
{
    int num1,num2;
    printf("Enter the two numbers:");
    scanf("%d%d",&num1,&num2);

    if(num1 == num2)
    {
        printf("They are equal.");
    }
    else
    {
        printf("They are not equal and the higher is:%d",(num1>num2? num1:num2));
    }
}