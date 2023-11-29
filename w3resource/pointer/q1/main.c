#include <stdio.h>

int main(){
    int m=10,n,o;
    int *z;
    z = &m;
    printf("&m is the address of m = %p\n",&m);
    printf("&n is the address of n = %p\n", &n);
    printf("&o is the address of o = %p\n", &o);
    printf("&z is the address of z = %p\n", &z);
    printf("%d",*z);
}