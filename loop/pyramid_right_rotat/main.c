#include <stdio.h>

int main(){
    int row;
    scanf("%d",&row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i + j >= row - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = 1; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (i<=j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}