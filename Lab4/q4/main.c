#include <stdio.h>

int main(){
    int n;
    do{
        scanf(" %d",&n);
        switch (n)
        {
        case 70 ... 100:
            printf("Outstanding\n");
            break;
        case 50 ... 69:
            printf("Pass\n");
            break;
        case 0 ... 49:
            printf("Fail\n");
            break;
        default:
            printf("invalid score\n");
            break;
        }
    }while(n<0 || n>100);
    return 0;
}