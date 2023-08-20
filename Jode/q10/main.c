#include <stdio.h>

int main()
{
    int sec;
    scanf("%d",&sec);
    int hr = sec / 3600;
    int min = (sec % 3600)/60;
    sec = (sec%3600)%60;
    if(min<=9||sec<=9){
        printf("%d:0%d:0%d",hr,min,sec);
    }
    else{
        printf("%d:%d:%d", hr, min, sec);
    }
    
    return 0;
}