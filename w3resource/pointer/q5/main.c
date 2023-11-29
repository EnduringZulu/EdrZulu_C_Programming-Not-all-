#include <stdio.h>

void add(int *a,int *b);

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    add(&a,&b);
    printf("%d",a);
    return 0;
}

void add(int *a,int *b){
    *a+=*b;
}