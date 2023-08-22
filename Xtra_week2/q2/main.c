#include <stdio.h>

int main()
{
    int inp1;
    scanf("%d", &inp1);
    if (inp1 < 0)
    {
        printf("Negative\n");
    }
    else if (inp1 >0)
    {
        printf("Positive\n");
    }
    else{
        printf("Neither positive nor negative");
    }
    if(inp1%2!=0)
    {
        printf("Odd\n");
    }
    else{
        printf("Even\n");
    }
    if(inp1==-7||inp1==7 || (inp1%10)==7){
        printf("Ending with 7\n");
    }
    if(inp1%3==0 && inp1%5==0){
        printf("Divisible by 3 and 5\n");
    }
    else{
        if (inp1 % 5 == 0)
        {
            printf("Divisible by 5\n");
        }
        else if(inp1 % 3 == 0){
            printf("Divisible by 3\n");
        }
        
    }
    
    return 0;
}