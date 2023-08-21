#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    switch (x)
    {
    case 1:
        if (y==20){
            printf("Coffee 20$");
        }
        else if (y>20){
            printf("Coffee 20$, with %d change",y-20);
        }
         else{
            printf("Not enough Money to buy Coffee");
        }
        break;
    case 2:
        if (y == 23)
        {
            printf("Tea 23$");
        }
        else if (y>23)
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
        printf("We have only 3 menus");
        break;
    }
    return 0;
}