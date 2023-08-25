#include <stdio.h>

int main(){
    float b,result;
    char sym,a;
    while(1==1){
        scanf("%f %c %f", &a, &sym, &b);
        if(a=='a'){
            break;
        }
        switch (sym)
        {
        case '+':
            result=a+b;
            break;
        case '-':
            result = a-b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if(b==0){
                printf("can't divided by 0.");
            }
            else{
                result = a / b;
            }
            break;
        case '%':
            if ((a - (int)a) == 0 && (b - (int)b) == 0)
                result = (int)a % (int)b;
            else{
                printf("can't %% because input is float");
            }
            break;
        default:
            printf("You type wrong.");
            break;
        }
        if(result-(int)result ==0){
            printf("%.0f\n", result);
        }
        else{
            printf("%f\n",result);
        }
        

    }
    return 0;
}