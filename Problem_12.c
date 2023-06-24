#include<stdio.h>

void main(void)
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);

    int i=1,fact=1;
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("The factorial is:%d",fact);
}