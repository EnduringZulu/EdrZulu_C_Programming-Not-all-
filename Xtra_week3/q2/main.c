#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i==7 || (i-((i/10)*10))==7)
        {
            printf("seven-up ");
        }
        else if (i != 7)
        {
            printf("%d ", i);
        }
    }
    return 0;
}