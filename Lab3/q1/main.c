#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    for (int i =1;i<=x;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
    printf("\n");
    for (int j =x;j>=1;--j){
        if(j%2==0){
            printf("%d ",j);
        }
    }
    
    return 0;
}