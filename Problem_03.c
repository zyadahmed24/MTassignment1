#include<stdio.h>

void main(void)
{
    float celsius;
    printf("Enter the celsius degree:");
    scanf("%f",&celsius);
    printf("\nThe fahernheit degree is:%f",(celsius*((float)9/5)+32)); /* take care about the casting and the (%) */
}