#include <stdio.h>

void main(void)
{
    int i, j, x = 0, y = 0;

    for (i = 0; i < 19; i++)
    {
        if (i <= 9)
        {
            for (j = 0; j < 19; j++)
            {
                printf("%d ", x);
                if (j >= (18 - i))
                {
                    x--;
                }
                else if (x != i)
                {
                    x++;
                }
            }
        }
        else
        {
            for (j = 0; j < 19; j++)
            {
                printf("%d ", x);
                if (j >= (18 - (18-i)))
                {
                    x--;
                }
                else if (x != (18-i))
                {
                    x++;
                }
            }
        }

        x = 0;
        printf("\n");
    }
}