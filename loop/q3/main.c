#include <stdio.h>

int main(){
    int x,y,z,i=1;
    scanf("%d %d", &x, &y);
    z =x;
    if(x>0 && y>0){
        while (i<=y){
            printf("%d ",z);
            i++;
        }
    }
    else if(x<0 || y<0){
        printf("Unable to make the series.");
    }
    return 0;
}