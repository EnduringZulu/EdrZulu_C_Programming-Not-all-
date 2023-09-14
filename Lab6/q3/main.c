#include <stdio.h>

int main(){
    int n;
    int arr[n];
    int find;
    int found=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &find);
    for(int i=0; i<n; i++){
        if(arr[i]==find){
            found=i;
            break;
        }
        else{
            continue;
        }
    }
    if(found==0){
        printf("Not found");
    }
    else{
        printf("%d", found);
    }
    return 0;
}