#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    switch (x)
    {
    case 1:
        if (y-20>=0){
            printf("Coffee 20$, with %d change",y-20);
        }
         else{
            printf("Not enough Money to buy Coffee");
        }
        break;
    case 2:
        if (y - 23 >= 0)
        {
            printf("Tea 23$, with %d change", y-23);
        }
        else
        {
            printf("Not enough Money to buy Tea");
        }
        break;
    case 3:
        printf("Love is for free, get your %d back", y);

        break;

    default:
        break;
    }
    return 0;
}