#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>=j&&count<n){
                count++;
                printf("%d ",count);
            }
        }
        printf("\n");
    }
    return 0;
}