#include <stdio.h>

int main(){
    int inp;
    printf("Input second: ");
    scanf("%d",&inp);
    //hours
    int hours = inp / 3600;
    //remainder from hours
    inp %= 3600;
    // min
    int minutes = inp /60;
    //seconds
    int seconds = inp % 60;
    printf("%d:%d:%d",hours,minutes,seconds);
    return 0;
}