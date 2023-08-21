#include <stdio.h>

int main(){
    int a=2,b=1,n,result=0;
    scanf("%d", &n);
    printf("%d %d ", a,b);
    for(int i =0;i<n-2;i++){
        result = a+b;
        printf("%d ", result);
        a = b;
        b = result;
    }
    return 0;
}