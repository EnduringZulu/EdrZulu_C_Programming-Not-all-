#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("The elements you entered are :\n");
    for(int i=0;i<n;i++){
        printf("element - %d : %d\n",i,arr[i]);
    }
    return 0;
}