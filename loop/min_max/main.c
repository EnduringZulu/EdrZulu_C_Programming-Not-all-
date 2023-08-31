#include <stdio.h>

int main(){
    int n,min,max;
    for(int i=1;i<=10;i++){
        scanf("%d", &n);
        if(i==1){
            min = n;
            max =n;
        }
        else if(max<n){
            max = n;
        }
        else if(min>n){
            min = n;
        }
    }
    printf("min = %d\n",min);
    printf("max = %d\n",max);

    return 0;
}