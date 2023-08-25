#include <stdio.h>

int main(){
    int a,b,i=1;
    scanf("%d %d", &a, &b);
    while (i<=b)
    {
        printf("%d x %d = %d\n", a, i, a*i);
        i++;
    }
    
    return 0;
}