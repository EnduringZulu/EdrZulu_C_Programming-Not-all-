#include <stdio.h>

int main(){
    int x;
    do{
        scanf("%d",&x);
    }while(x<0);
    printf("Input is %d", x);
    return 0;
}