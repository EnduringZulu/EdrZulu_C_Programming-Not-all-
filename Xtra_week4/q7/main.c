#include <stdio.h>

int main(){
    char x;
    int countu=0,countl=0;
    for(int i=1;i>0;i++){
        scanf(" %c",&x);
        if(x=='#'){
            break;
        }
        else if(x>='A'&& x<='Z'){
            countu+=1;
        }
        else if(x>='a'&& x<='z'){
            countl+=1;
        }
    }
    printf("Uppercase: %d\n",countu);
    printf("Lowercase: %d\n",countl);
    return 0;
}