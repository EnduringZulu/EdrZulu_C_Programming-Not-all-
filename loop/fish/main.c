#include <stdio.h>

int main(){
    int n,a=1,b=0,c=0;
    scanf("%d",&n);
    int space1=n*2,space2=n-1;
    if(n<=2){
        printf("Invalid input");
    }
    else{
        for (int i = 0; i < n; i++)
        {
            for (int j = space1; j > 0; j--)
            {
                printf("  ");
            }
            space1 -= 2;
            for (int k = 0; k < a; k++)
            {
                printf("* ");
            }
            for (int j = space2; j > 0; j--)
            {
                printf("  ");
            }
            for (int k = 0; k < c; k++)
            {
                printf("* ");
            }
            b++;
            space2--;
            a += 2;
            c++;
            printf("\n");
        }
        //-----------------------------------
        for (int line = 0; line < n * 3; line++)
        {
            printf("* ");
        }
        printf("\n");
        //-----------------------------------
        int space3 = 1, space4 = 0, d = 0, e = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= space3; j++)
            {
                printf("  ");
            }
            space3 += 2;
            for (int k = (n * 2) - 1; k > d; k--)
            {
                printf("* ");
            }
            for (int j = 0; j < space4; j++)
            {
                printf("  ");
            }
            for (int k = n - 1; k > e; k--)
            {
                printf("* ");
            }
            b++;
            space4++;
            d += 2;
            e++;
            printf("\n");
        }
    }
    return 0;
}