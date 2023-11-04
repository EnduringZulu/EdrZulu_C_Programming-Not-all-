#include <stdio.h>
#include <stdlib.h>

int main(){
    char inp[10];
    int count=0;
    float sum=0;
    
    while(inp[0]!='q'){
        scanf("%s", &inp[0]);
        if(inp[0]!='q'&& atoi(inp)>=0&&atoi(inp)<=100){
            count+=1;
            sum = sum + atoi(inp);
        }
    }
    printf("%.2f ",sum/count);
    if(sum>50){
        printf("Pass");
    }
    else if(sum<=50&&sum>=0){
        printf("Fail");
    }
    return 0;
}