#include <stdio.h>

int main(){
    int s,e,st;
    scanf("%d %d %d", &s, &e, &st);
    for(int i = s; i <= e; i += st){
        if(i<e&&i+st<=e){
            printf("%d-", i);
        }
        else{
            printf("%d", i);
        }
    }
    return 0;
}