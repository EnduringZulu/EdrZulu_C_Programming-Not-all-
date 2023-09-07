#include <stdio.h>

int main(){
    float w,h;
    char x;
    scanf("%f %f %c",&w,&h,&x);
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            printf("%c ",x);
        }
        printf("\n");
    }
    return 0;
}