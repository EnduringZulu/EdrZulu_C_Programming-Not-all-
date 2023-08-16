#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("%d is an even integer",x);
    }
    else
    {
        printf("%d is an odd integer",x);
    }
    return 0;
}