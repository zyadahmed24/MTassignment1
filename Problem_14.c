#include<stdio.h>

void main(void)
{
    char term=65,i=0,preterm=0;

    while(preterm!='Z')
    {
        preterm = term+i;
        printf("%c ",preterm);
        i++;
    }
}