#include<stdio.h>  

void main(void)
{
   int i,j;
   for(i=0;i<11;i++)
   {
    if(i==5)
        continue;
    for(j=0;j<11;j++)
    {
        if(j==i || j==10-i)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
   }
}