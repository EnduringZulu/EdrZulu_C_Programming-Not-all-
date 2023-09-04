#include <stdio.h>

int main(){
    // x=1st y=2nd z=multiply between num
    /*int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    for(int i=x;i<=y;i=i*z){
        printf("%d ",i);
    }*/
    for (int i = 1; i <= 64; i *=2)
    {
        printf("%d ", i);
    }
    return 0;
}