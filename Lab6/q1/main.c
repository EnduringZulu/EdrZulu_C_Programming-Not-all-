#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int k=n-1;
    int a=0;
    while (a<=k)
    {
        printf("%d ", arr[a]);
        a++;
    }
    int l=n-1;
    printf("\n");
    while(l>=0){
        printf("%d ", arr[l]);
        l--;
    }
    return 0;
}