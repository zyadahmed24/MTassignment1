#include<stdio.h>

void main(void)
{
   int i,j;
   for(i=1;i<6;i++)
   {
    for(j=1;j<=6-i;j++)
    {
        printf("* ");
    }
    printf("\n");
   }
}