#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int yy = x /(360);
    int mm = ((x%360)/30);
    int d = (x % 360) % 30;
    printf("%d/%d/%d",yy,mm,d);
    return 0;
}