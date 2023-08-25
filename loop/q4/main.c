#include <stdio.h>

int main(){
    int n,i=1;
    scanf("%d", &n);
    while(i<=n){
        if(i%3==0 && i%5!=0){
            printf("Fizz ");
        }
        else if (i % 5 == 0 && i % 3 != 0)
        {
            printf("Buzz ");
        }
        else if (i % 5 == 0 && i % 3 == 0)
        {
            printf("FizzBuzz ");
        }
        else{
            printf("%d ",i);
        }
        i++;
    }
    return  0;
}