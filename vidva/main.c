#include <stdio.h>

int main(){
    float size;
    char types;
    printf("Input your foot size(cm.) :");
    scanf("%f",&size);
    printf("%f",size);
    if(size>0&&size<=10000){
        printf("Select option:\n- type's' to select US size\n- type 'k' to select UK size\nInput >> ");
        scanf("%c",&types);
        printf("Your shoes");
    }else{
        printf("Input >> Not available");
    }
    return 0;
}