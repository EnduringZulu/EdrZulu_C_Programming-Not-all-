#include <stdio.h>

int main(){
    int n,x=2;
    scanf("%d",&n);
    int y=n;
    while(x<=n+1){
        for(int i=0;i<x;i++){
            if(x<=n){
                for(int k = 0; k < y-1;k++){
                    printf("  ");
                }
            }
            for(int j=0;j<(x*2)-1;j++){
                if(i+j>=x-1 && (j-i)<=x-1){
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        x++;
    }
    return 0;
}