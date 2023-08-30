#include <stdio.h>

int main(){
    int n,x=2;
    scanf("%d",&n);
    while(x<=n){
        for(int i=0;i<x;i++){
            for(int j=0;j<(x*2)-1;j++){
                if(i+j>=x-1 && (j-i)<=x-1){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("\n");
        }
        x++;
    }
    return 0;
}