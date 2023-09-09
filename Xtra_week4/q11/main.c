#include <stdio.h>

int main(){
    int n,a=0,b=1,c=0;
    scanf("%d",&n);
    int i=0;
    do{
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
        i++;
    }while(i<n);
    return 0;
}