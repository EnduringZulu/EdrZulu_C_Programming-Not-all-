#include <stdio.h>

int main(){
    float inp1,inp2;
    scanf("%f\n%f",&inp1,&inp2);
    float area = inp1 * inp2;
    if(inp1<=0||inp2<=0){
        printf("Invalid");
    }
    else if (inp1 != inp2 && inp1>0 && inp2>0)
    {
        printf("Not square %.2f\n", area);
    }
    else{
        printf("Square\nArea=%.2f",area);
    }
    return 0;
}