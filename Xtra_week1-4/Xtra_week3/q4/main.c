#include <stdio.h>

int main(){
    int x,y,d,count;
    scanf("%d %d %d",&x,&y,&d);
    for(int i=x;i<=y;i++){
        if(i%d==0){
            printf("%d ",i);
            count+=1;
        }
    }
    printf("count=%d",count);
    return 0;
}