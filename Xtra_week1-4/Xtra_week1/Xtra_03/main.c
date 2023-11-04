#include <stdio.h>

int main(){
    float base,height;
    printf("Input(Base):");
    scanf("%f",&base);
    printf("Input(Height):");
    scanf("%f",&height);
    float half = 0.5;
    float area = half*base*height;
    int result;
    result = (area - (int)area)*10000;
    if(result == 0){
        printf("%.0f",area);

    }
    else{
        printf("%.2f", area);
    }
    
    return 0;
}