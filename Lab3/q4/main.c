#include <stdio.h>

int main()
{
    char x;
    int count=0,count2=0,count3=0;
    while(x!='q'){
        scanf("%c", &x);
        if(x%2!=0){
            count = count + 1;
            count2 = (int)x-48;
            printf("%d", count2);
        }
        count3 = count3 + count2;
        printf("\n%d", count3);
    }
    printf("%d:%d",count-1,count3);
    return 0;
}