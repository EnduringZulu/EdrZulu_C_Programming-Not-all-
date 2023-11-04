#include <stdio.h>
#include <stdlib.h>

int main(){
    char inp;
    int v=0,c=0;
    do
    {
        if(inp=='0'){
            break;
        }
        switch (inp)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            v += 1;
            break;
        case 'b' ... 'd':
        case 'f' ... 'h':
        case 'j' ... 'n':
        case 'p' ... 't':
        case 'v' ... 'z':
            c += 1;
            break;
        default:
            
            break;
        }
        scanf("%c", &inp);
    } while (1);
    printf("vowel:%d\n", v);
    printf("consonant:%d",c);
    return 0;
}