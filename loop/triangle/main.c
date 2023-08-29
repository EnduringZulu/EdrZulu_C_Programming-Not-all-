/*
*
**
***
****
*****
*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(1){
    if(n%2==0){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("*");
            }
            printf("\n");
        }
        break;
    }
    else if(n%2==1){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j<=i){
                    printf("*");
                }
            }
            printf("\n");
        }
        break;
    }
    }
    return 0;
}