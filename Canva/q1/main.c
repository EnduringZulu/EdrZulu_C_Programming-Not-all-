#include <stdio.h>

int main(){
    float x,y;
    char sym;
    scanf("%f %c %f",&x,&sym,&y);
    switch (sym)
    {
    case '+':
        printf("%.2f",x + y);
        break;
    case '-':
        printf("%.2f", x - y);
        break;
    case '*':
        printf("%.2f", x * y);
        break;
    case '/':
        if (y != 0)
        {
            printf("%.2f", x / y);
        }
        else
        {
            printf("Division by 0 is not allowed");
        }
        break;
    case '%':
        if (y == 0){
            printf("Division by 0 is not allowed");
        }
        else{
            printf("%d",(int)x % (int)y);
        }
        break;

    default:
        break;
    }
    return 0;
}