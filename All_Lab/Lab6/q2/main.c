#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int min = arr[1];
    int max = arr[0];
    for(int i=2; i<n; i++){
        if(i%2!=0&&arr[i]<min){
            min = arr[i];
        }
        else if(i%2==0&&arr[i]>=max){
            max = arr[i];
        }
    }
    printf("%d %d", min, max);
    return 0;
}