#include <stdio.h>

int main(void)
{
    int row, col, find, count = 0;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &find);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == find)
            {
                printf("[%d,%d] ", i, j);
                count++;
            }
        }
    }
    if (count == 0)
    {
        printf("Not found");
    }
    return 0;
}