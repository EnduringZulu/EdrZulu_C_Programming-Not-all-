#include <stdio.h>

int main(){
    int w,l,r,c=0;
    printf("Width : ");
    scanf("%d",&w);
    printf("Length : ");
    scanf("%d",&l);
    printf("Radius : ");
    scanf("%d",&r);
    if ((r * 2 <= w) && (r * 2 <= l))
    {
        for (int i = 0; i < l / (r * 2); i++)
        {
            for (int j = 0; j < w / (r * 2); j++)
            {
                c++;
            }
        }
        printf("%d",c);
    }

    return 0;
}