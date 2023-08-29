/*
++++----
++++----
----++++
----++++
*/
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n%2==0&&n>0){
        for(int i =0;i<n/2;i++)
        {
            for(int j=0;j<n;j++)
            {
                if (j<n/2)
                {
                    printf("+ ");
                }
                else
                {
                    printf("- ");
                }
            }
            printf("\n");
        }
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j < n / 2)
                {
                    printf("- ");
                }
                else
                {
                    printf("+ ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}