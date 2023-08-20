#include <stdio.h>

int main()
{
    char x;
    int y;
    scanf("%c %d", &x, &y);
    if(x == y){
        printf("True");
    }
    else{
        printf("False: %c is %d",x,x);
    }
    return 0;
}