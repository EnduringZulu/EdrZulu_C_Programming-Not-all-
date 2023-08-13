#include <stdio.h>

int main(){
    float a,b;
    printf("Input a:");
    scanf("%f",&a);
    printf("Input b:");
    scanf("%f",&b);
    double result = (a-b)*(a-b);
    printf("%.2f",result);
    return 0;
}