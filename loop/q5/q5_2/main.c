#include <stdio.h>

int main()
{
    float a,b, result;
    char sym;
    printf("Enter operator that u will use to calculate +,-,*,/,%%\n");
    printf("After that input your number that you want to calculate\n");
    printf("Example: +\n2 3\nOutput:5\n");
    printf("Enter \"a\" to end.\n");
    while (1){
        scanf("%c", &sym);
        if(sym=='a'){
            break;
        }
        scanf("%f %f", &a, &b);
            
            switch (sym)
            {
            case 'a':
                break;
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '*':
                result = a * b;
                break;
            case '/':
                if (b == 0)
                {
                    printf("can't divided by 0.");
                }
                else
                {
                    result = a / b;
                }
                break;
            case '%':
                if ((a - (int)a) == 0 && (b - (int)b) == 0)
                    result = (int)a % (int)b;
                else
                {
                    printf("can't %% because input is float");
                }
                break;

            default:
                printf("You type wrong.");
                break;
            }
            if (result - (int)result == 0)
            {
                printf("%.0f\n", result);
            }
            else
            {
                printf("%f\n", result);
            }
        
        
        
    }    

    
    return 0;
}