#include <stdio.h>

int main(){
    int n=1;
    for(int i=0;i<34;i++){
        printf("bandit%d -> bandit%d\n",i,n);
        n++;
    }
    return 0;
}