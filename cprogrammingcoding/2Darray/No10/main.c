#include <stdio.h>

int main(){
    int n,del,m=0;
    scanf("%d",&n);
    int arr[n],arr2[n-1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&del);
    for(int i=-1;i<n;++i){
        if(arr[i]==del){
            m++;
        }
        arr2[i]=arr[i+m];
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}