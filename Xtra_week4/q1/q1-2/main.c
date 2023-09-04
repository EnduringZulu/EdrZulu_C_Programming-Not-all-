#include <stdio.h>

int main(){
    char x;
    do{
        scanf(" %c",&x);
    }while(x>='A' && x<='Z');
    printf("Input is %c", x);
    return 0;
}