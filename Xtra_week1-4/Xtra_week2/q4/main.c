#include <stdio.h>

int main()
{
    int inp1, inp2;
    scanf("%d %d", &inp1, &inp2);
    if(inp1==0||inp2==0){
        printf("No quadrant");
    }
    else if(inp1>0&&inp2>0){
        printf("Q1");
    }
    else if (inp1 < 0 && inp2 > 0)
    {
        printf("Q2");
    }
    else if (inp1 < 0 && inp2 < 0)
    {
        printf("Q3");
    }
    else if (inp1 > 0 && inp2 < 0)
    {
        printf("Q4");
    }
    return 0;
}