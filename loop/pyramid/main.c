#include <stdio.h>
/*
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n*2)-1; j++)
        {
            printf("(%d,%d)",i,j);
        }
        printf("\n");
    }
    return 0;
}
*/

int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n*2)-1; j++)
        {
            if(i+j>=n-1&&j-i<=n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}