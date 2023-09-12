#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int j=n;j>0;j--){
        for (int i = j - 1; i > 0; i--)
        {
            printf(" ");
        }
        for(int k=0;k<n;k++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}