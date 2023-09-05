#include <stdio.h>

int main(){
    int countu,countl;
    char x;
    while(x!='#'){
        scanf("%c",&x);
        if(x>='A'&& x<='Z'){
            countu+=1;
        }
        else if(x>='a'&& x<='z'){
            countl+=1;
        }
    }
    printf("Upper: %d\n",countu);
    printf("Lower: %d\n",countl);
    return 0;
}