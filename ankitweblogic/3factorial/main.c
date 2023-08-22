#include <stdio.h>

int main(){
    int n, i=1 , res=1;
    scanf("%d", &n);
        while (i<=n)
        {
            res = res * i;
            i++;
        }
        
    printf("%d", res);
    
    return 0;
}