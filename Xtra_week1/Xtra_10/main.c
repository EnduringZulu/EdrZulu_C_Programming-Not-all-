#include <stdio.h>

int main(){
    float radius;
    printf("Input the radius:");
    scanf("%f",&radius);
    float circum = 2.00 * 3.141592 * radius;
    float area = 3.141592 * radius * radius;
    printf("Circumference: %.2f\n", circum);
    printf("Area: %.2f",area);
    return 0;
}