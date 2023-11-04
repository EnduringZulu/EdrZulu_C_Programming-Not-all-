#include <stdio.h>

int main()
{
    int n;
    int sum=1;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        sum = sum*i;
    }
    printf("%d",sum);
    return 0;
}