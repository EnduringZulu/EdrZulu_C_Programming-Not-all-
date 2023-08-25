#include <stdio.h>

int main(){
    int x,y,d,count=0;
    scanf("%d %d %d", &x, &y,&d);
    if(x>y){
        printf("x must be less than y");
    }
    else if(d>0){
        while (x<=y){
            if(x%d==0){
                printf("%d ",x);
                count = count + 1;
            }
            x++;
        }
    
    printf("count=%d",count);
    }
    else if(d==0){
    printf("Unable to divide");
    }
    return 0;
}