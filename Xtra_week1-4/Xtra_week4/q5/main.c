#include <stdio.h>

int main(){
    int n;
    do
    {
        scanf("%d",&n);
    } while (n<=0);

    for(int i=-n;i<=n;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
    
    return 0;
}