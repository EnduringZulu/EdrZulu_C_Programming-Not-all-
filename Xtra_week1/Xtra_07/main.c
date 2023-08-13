#include <stdio.h>
#include <math.h>

int main(){
    float a,b;
    printf("Input a:");
    scanf("%f",&a);
    printf("Input b:");
    scanf("%f",&b);
    double result = pow((a - b),2);
    printf("%.2f",result);
    return 0;
}