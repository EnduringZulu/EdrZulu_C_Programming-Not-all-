#include <stdio.h>

int main(){
    int x,y,z=0;
    scanf("%d %d",&x,&y);
    while(x<=y){
        z=z+x;
        x++;
    }

    
    printf("%d\n",z);
    return 0;
}