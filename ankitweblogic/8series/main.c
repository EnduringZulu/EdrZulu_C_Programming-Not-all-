#include <stdio.h>
// series: 1 1 1 3 5 9 17 31 57 105 ... n
int main(){
    int n,a=1,b=1,c=1,d=0;
    scanf("%d", &n);
    printf("%d %d %d ", a,b,c);
    for(int i =0;i<n-3;i++){
        d = a+b+c;
        printf("%d ", d);
        a = b;
        b = c;
        c = d;
    }
    return 0;
}