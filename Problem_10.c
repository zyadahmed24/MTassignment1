#include<stdio.h>

void main(void)
{
    char operation;
    float num1,num2;
    printf("Enter the operation:\n");
    scanf("%c",&operation);
    printf("Enter the numbers:\n");
    scanf("%f%f",&num1,&num2);

    switch (operation)
    {
    case '/':
        printf("the result is:%f",num1/num2);
        break;
    case '*':
        printf("the result is:%f",num1*num2);
        break;
    case '+':
        printf("the result is:%f",num1+num2);
        break;
    case '-':
        printf("the result is:%f",num1-num2);
        break;        
    default:
        printf("It's unkown operation");
        break;
    }
}