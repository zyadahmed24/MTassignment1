#include<stdio.h>

void main(void)
{
    int num1,num2,num3;
    printf("Enter the three numbers:\n");
    scanf("%d%d%d",&num1,&num2,&num3);

    printf("The smallest number is:%d",(num1<num2? (num1<num3? num1:num3) : (num2<num3? num2:num3)));
}