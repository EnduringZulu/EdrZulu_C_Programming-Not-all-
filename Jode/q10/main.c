#include <stdio.h>

int main()
{
    int sec;
    scanf("%d",&sec);
    int hr = sec / 3600;
    int min = (sec % 3600)/60;
    sec = (sec%3600)%60;
    printf("%d:%d:%d",hr,min,sec);
    return 0;
}