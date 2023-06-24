#include<stdio.h>

void main(void)
{
    int num,power,i,out=1;
    printf("Enter the number and the power:\n");
    scanf("%d%d",&num,&power);

    i=1;
    while(i<=power)
    {
        out = out*num;
        i++;
    }
    printf("The output is:%d",out);
}