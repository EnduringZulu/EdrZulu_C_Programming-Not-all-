#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<(2*n)-1;j++){
            if(i+j>=n-1&&j-i<=n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<(2*n)-1;j++){
            if (j>=i && i+j <= (n*2)-2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}