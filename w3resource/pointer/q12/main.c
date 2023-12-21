#include <stdio.h>

void fact(int n, int *res){
    int all=1;
    for(int i=1;i<=n;i++){
        all*=i;
    }
    *res = all;
}

int main(){
    int n,res;
    scanf("%d",&n);
    fact(n,&res);
    printf("%d",res);
    return 0;
}