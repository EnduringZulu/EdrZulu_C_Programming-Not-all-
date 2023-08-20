#include <stdio.h>

int main(){
    float inp;
    printf("Input: ");
    scanf("%f",&inp);
    int result_1 = (inp * 100)/100;
    float result_2 = ((inp)-result_1) * 100;
    printf("Whole Number: %d\n", result_1);
    printf("Decimal places: %.0f", result_2);
    return 0;
}