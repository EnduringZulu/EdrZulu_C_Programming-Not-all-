#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%dB ", i);
        }
        else
        {
            printf("%dA ", i);
        }
    }
    return 0;
}