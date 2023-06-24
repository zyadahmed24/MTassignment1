#include<stdio.h>                       /*the idea is when will you print star not space as usual*/

void main(void)
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<9;j++)
        {
            if(j>(5-i) && j<(5+i))      /*you will print star at position five and before it by i and after it by i*/
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