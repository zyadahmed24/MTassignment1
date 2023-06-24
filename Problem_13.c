#include<stdio.h>

void main(void)
{
    int num,i,flag=0;
    printf("Enter the number:\n");
    scanf("%d",&num);

    for(i=1;i<num;i++)
    {
        if(num%i==0 && i!=1)
        {
            printf("it's not a prime number");
            flag=1;
            break;
        }
    }
    if(!flag)
    {
        printf("it's a prime number");
    }
}