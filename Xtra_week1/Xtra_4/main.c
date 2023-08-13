#include <stdio.h>

int main(){
    int x,y;
    printf("Input 1 :");
    scanf("%d",&x);
    printf("Input 2 :");
    scanf("%d",&y);
    int result = x-((x/y)*y);
    printf("%d",result);
    return 0;
}