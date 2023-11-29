#include <stdio.h>

void max(int num1,int num2,int *maxnum){
    if(num1 > num2) *maxnum = num1;
    else *maxnum = num2;
}

int main(){
    int num1,num2,maxnum;
    scanf("%d%d",&num1,&num2);
    max(num1,num2,&maxnum);
    printf("%d",maxnum);
    return 0;
}