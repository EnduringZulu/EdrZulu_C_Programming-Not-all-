#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    do{
        n=rand();
    }while(n<1||n>100);
    int guess;
    do{
        printf("guess the number: ");
        scanf("%d",&guess);
    }while(guess!=n);
    printf("Correct!");
    return 0;
}