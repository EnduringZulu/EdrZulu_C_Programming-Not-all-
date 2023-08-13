#include <stdio.h>

int main(){
    float base,height;
    printf("Input(Base):");
    scanf("%f",&base);
    printf("Input(Height):");
    scanf("%f",&height);
    float half = 0.5;
    float area = half*base*height;
    printf("%.2f",area);
    return 0;
}