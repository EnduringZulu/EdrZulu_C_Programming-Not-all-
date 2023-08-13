#include <stdio.h>

int main(){
    float distance,time;
    printf("Input distance:");
    scanf("%f",&distance);
    printf("Input time:");
    scanf("%f",&time);
    float result = (distance /60)*time;
    printf("%.2f",result);
    return 0;
}