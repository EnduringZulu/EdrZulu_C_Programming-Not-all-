#include <stdio.h>

int main(){
    int n,m;
    do{
        scanf("%d %d",&n,&m);
    }
    while(m>n);
    for(int i=1;i<=1000;i++){
        if((i%n)==m){
            printf("%d ",i);
        }
    }
    return 0;
}