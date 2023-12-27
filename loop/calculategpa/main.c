#include <stdio.h>

int main(){
    float arr[4],newarr[4],sum=0;
    char str[][20]={"Mathematic","English","Science","Art"};
    for(int i=0;i<4;i++){
        printf("Please enter %s score:",str[i]);
        scanf("%f",&arr[i]);
        if(arr[i]>=81 && arr[i]<=100){
            newarr[i]=4.0;
        }
        else if (arr[i] >= 71 && arr[i] <= 80){
            newarr[i] = 3.0;
        }
        else if (arr[i] >= 61 && arr[i] <= 70){
            newarr[i] = 2.0;
        }
        else if (arr[i] >= 51 && arr[i] <= 60){
            newarr[i] = 1.0;
        }
        else if (arr[i] >= 0 && arr[i] <= 50){
            newarr[i] = 0.0;
        }
        if(i==3){
            newarr[i]*=2.0;
        }else{
            newarr[i]*=3.0;
        }
        sum+=newarr[i];
    }
    printf("%.2f",(sum*4)/((4*3*3)+(4*2)));
    return 0;
}