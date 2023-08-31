#include <stdio.h>

int main()
{
    char x,y;
    scanf("%c %c", &x,&y);
    if (x<y){
        for (int i = x; i <= y; i++)
        {
            printf("%c ", i);
        }
    }
    else{
        for (int i = x; i <= 'Z'; i++)
        {
            printf("%c ", i);
        }
        for (int i = 'A'; i <= y; i++)
        {
            printf("%c ", i);
        }
        {

        }
    }
    return 0;
}