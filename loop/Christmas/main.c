#include <stdio.h>

int main(){
    int n,x=2;
    scanf("%d",&n);
    int s=n;
    while(x<=n+1){
        for(int i=0;i<x;i++){
            for(int k=s-1;k>0;k--){
                printf("  ");
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
        s--;
        x++;
    }
    return 0;
}