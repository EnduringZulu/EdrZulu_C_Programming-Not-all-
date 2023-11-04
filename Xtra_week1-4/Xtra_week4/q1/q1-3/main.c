#include <stdio.h>

int main(){
    int x;
    do{
        scanf("%d",&x);
    }while(x%2==0 || x<=0);
    printf("Input is %c",x);
    return 0;
}