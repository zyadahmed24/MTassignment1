#include<stdio.h>

void main(void)
{
    int sum,i;
    sum=0;
    
    for(i=0;i<100;i++)
    {
        sum=sum+i;
    }
    printf("The result is:%d",sum);
}