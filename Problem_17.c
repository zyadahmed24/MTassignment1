#include<stdio.h>

void main(void)
{
    int num,i=0;
    printf("Enter the number:\n");
    scanf("%d",&num);

    while(num!=0)
    {
        num = num/10;
        i++;
    }
    printf("Here we go:%d",i);
}