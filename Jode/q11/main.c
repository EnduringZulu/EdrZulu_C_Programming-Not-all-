#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int yy = x /(30*12);
    int mm = (x %(30*12))/12;
    int d = (x % (30 * 12)) % 12;
    printf("%d/%d/%d",yy,mm,d);
    return 0;
}