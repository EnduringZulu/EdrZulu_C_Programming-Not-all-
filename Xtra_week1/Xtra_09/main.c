#include <stdio.h>

int main(){
    float inp;
    printf("Input:");
    scanf("%f",&inp);
    int result_1 = (inp * 100)/100;
    int result_2 = ((inp)-result_1)*1000000;
    while (result_2 % 10 == 0)
    {
        result_2 = result_2 / 10;
    }
    
    printf("Whole Number: %d\n",result_1);
    printf("Decimal places: %d",result_2);
    return 0;
}