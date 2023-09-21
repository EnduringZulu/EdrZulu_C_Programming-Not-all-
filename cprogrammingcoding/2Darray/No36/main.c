#include <stdio.h>

int main(){
    int row,column;
    scanf("%d %d",&row,&column);
    int arr[row][column];
    int res[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }        
    }
    printf("Transpose\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            res[j][i]=arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}