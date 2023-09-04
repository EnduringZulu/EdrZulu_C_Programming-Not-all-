#include <stdio.h>

int main(){
    int x;
    do
    {
        scanf("%d",&x);
    } while (x<50 || x>150);
    printf("Input is %c",x);
    return 0;
}