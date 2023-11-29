#include <stdio.h>
#include <string.h>

void count(char sent[30],int *vowel,int *consn){
    int vol,con;
    for(int i=0;i<strlen(sent);i++){
        switch(sent[i]){
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                vol++;
                break;
            default:
                con++;
                break;
        }
    }
    *vowel = vol;
    *consn = con-1;
}

int main(){
    char sent[30];
    int vowel,consn;
    fgets(sent,30,stdin);
    count(sent,&vowel,&consn);
    printf("vowel %d\nconsonant %d",vowel,consn);
    return 0;
}