#include <stdio.h>

int main()
{
    int x;
    while (x % 2 == 0 || x <= 0)
    {
        scanf("%d", &x);
    }
    if (x == 1)
    {
        printf("* ====");
    }
    else
    {
        int c = -1;
        for (int s = 3; s < x; s += 2)
        {
            c = c + 2;
        }
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                if (i % 2 == 0)
                {
                    printf("* ");
                }
                else
                {
                    printf(" *");
                }
            }
            for (int k = 0; k < x; k++)
            {
                if (i % 2 == 0)
                {
                    for (int l = 0; l < x - c; l++)
                    {
                        printf("=");
                    }
                }
                else
                {
                    for (int l = 0; l < x - c; l++)
                    {
                        printf("-");
                    }
                }
            }
            printf("\n");
        }
        for (int i = 0; i < x - 1; i++)
        {
            if (i % 2 != 0)
            {
                for (int l = 0; l < x * 6; l++)
                {
                    printf("=");
                }
            }
            else
            {
                for (int l = 0; l < x * 6; l++)
                {
                    printf("-");
                }
            }
            printf("\n");
        }
    }
    return 0;
}