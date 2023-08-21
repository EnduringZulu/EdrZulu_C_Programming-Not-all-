#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int one = a / 1000;
    int two = (a % 1000) / 100;
    int three = ((a % 1000) % 100) / 10;
    int four = ((a % 1000) % 100) % 10;
    if (a>=501 && a<=1029)
    {
        printf("%d%d:%d%d -> Morning", one, two,three,four);
    }
    else if (a>=1030 && a<=1845)
    {
        printf("%d%d:%d%d -> Noon", one, two, three, four);
    }
    else if ((a>=0 && a<=500)||(a>=1846 && a<=2359))
    {
        printf("%d%d:%d%d -> Night", one, two, three, four);
    }
    else if(one==2 && two==4)
    {
        printf("There is no 24 o'clock");
    }
    else
    {
        printf("There was no clock has that 60");
    }
    return 0;
}