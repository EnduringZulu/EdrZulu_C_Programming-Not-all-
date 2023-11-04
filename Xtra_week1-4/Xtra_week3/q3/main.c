#include <stdio.h>

int main(){
    int x,y,i=1;
    scanf("%d %d",&x,&y);
    while(i<=y){
        printf("%d*%d=%d\n",x,i,x*i);
        i++;
    }
    return 0;
}