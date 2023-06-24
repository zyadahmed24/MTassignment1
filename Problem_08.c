#include<stdio.h>

void main(void)
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);

    int i=0,flag=0;
    while(!flag)
    {
        if(num == i*i)
        {
            flag=1;
            printf("it's a perfect square");
            break;
        }
        if(i>num/2)
        {
            break;
        }
        i++;
    }
    if(!flag)
    {
        printf("it's not a perfect square");
    }
}