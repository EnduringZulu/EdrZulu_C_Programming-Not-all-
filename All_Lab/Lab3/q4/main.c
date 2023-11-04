#include <stdio.h>

int main()
{
    char x;
    int count=0,count2=0,count3=0;
    while(x!='q'){
        scanf("%c", &x);
        if(x%2!=0&&x!='q'){
            count = count + 1;
            count2 = (int)x-48;
            count3 = count3 + count2;
        }
        
    }
    printf("%d:%d",count,count3);
    return 0;
}