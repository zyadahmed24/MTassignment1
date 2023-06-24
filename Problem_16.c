#include<stdio.h>

void main(void)
{
    int num,new_num=0;
    printf("Enter the number:\n");
    scanf("%d",&num);

    while(num!=0)
    {
        new_num=new_num+num%10;
        num = num/10;
        new_num = num==0? new_num : new_num*10;
    }
    printf("%d",new_num);
}