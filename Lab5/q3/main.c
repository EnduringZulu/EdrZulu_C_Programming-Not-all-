#include <stdio.h>

int main(){
    int n;
    while(n<=1||n>1000){
        scanf("%d",&n);
    }
    for(int i=2;i<=n;i++){
        int count=0;
        for(int j=2;j<=n;j++){
            if(i%j==0){
                count+=1;
            }
        }
        if(count==1){
            printf("%d ",i);
        }
    }
    return 0;
}