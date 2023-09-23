#include <stdio.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int arr[row][column];
    int all[column][row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
            all[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ", all[i][j]);
        }
        printf("\n");
    }
    return 0;
}