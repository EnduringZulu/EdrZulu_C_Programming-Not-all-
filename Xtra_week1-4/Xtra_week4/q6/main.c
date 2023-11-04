#include <stdio.h>

int main(){
    char n=65;
    for(int i=1;i<=26;i++){
        if(i%2==1){
            n+=32;
            printf("%c,",n);
            n++;
        }
        else if(i%2==0){
            n-=32;
            if(n==90){
                printf("%c",n);
            }else{
                printf("%c,",n);
            }
            n++;
        }
    }
    return 0;
}