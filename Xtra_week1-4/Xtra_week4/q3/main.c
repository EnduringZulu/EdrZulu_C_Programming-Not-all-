#include <stdio.h>

int main(){
    int x=1;
    float num,sum=0;
    scanf("%f",&num);
    while(x<=num){
        sum = sum + 1.0/x;
        x++;
    }
    printf("%.2f",sum);
    return 0;
}