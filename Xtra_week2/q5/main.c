#include <stdio.h>

int main()
{
    int inp1;
    scanf("%d", &inp1);
    if ((inp1 %100)==0 && (inp1%400)!=0)
    {
        printf("Common");
    }
    else if (inp1 % 400 == 0 || inp1 % 4 == 0)
    {
        printf("Leap");
    }
    else{
        printf("Common");
    }
    
    return 0;
}