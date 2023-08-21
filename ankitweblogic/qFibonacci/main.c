// https://www.ankitweblogic.com/c/exercise-loops.php
#include <stdio.h>

int main(){
    int n;
    int a = 0, b=1,result;
    scanf("%d", &n);
    printf("0 ");
    printf("1 ");
    for ( int i = 0; i < n-2; i++)
    {
        result = a + b;
        printf("%d ", result);
        a = b;
        b = result;
    }
    
    return 0;
}