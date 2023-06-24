#include<stdio.h>

void main(void)
{
    float radius,area,circumference;
    printf("Enter the radius of teh circuit:");
    scanf("%f",&radius);
    area = (radius*radius*((float)22/7));
    circumference = (2*((float)22/7)*radius);
    printf("\nThe area:%0.4f metersquare\tThe circumfrence:%0.3f meter",area,circumference);
}