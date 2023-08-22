#include <stdio.h>
//sequence: 1 3 6 10 15 21 28 36 45 55 ... n
int main(){
    int n,a=0;
    scanf("%d", &n);
    for(int i =1;i<=n;i++){
        a = a + i;
        printf("%d ", a);
    }
    return 0;
}