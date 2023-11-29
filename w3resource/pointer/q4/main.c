#include <stdio.h>

int main(){
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int *ptr = num1+num2;
    printf("The sum of the entered numbers is : %d", ptr);
    return 0;
}