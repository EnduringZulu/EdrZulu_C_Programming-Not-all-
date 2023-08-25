#include <stdio.h>

int main(){
    float x;
    scanf("%f",&x);
    if(x<=2 && x>0)
    {
        printf("%.1f",x*12.0);
    }
    else if(x>2)
    {
        float result = ((2*12)+(x-2)*4);
        printf("%.1f",result);
    }
    else{
        printf("Error");
    }
    return 0;
}