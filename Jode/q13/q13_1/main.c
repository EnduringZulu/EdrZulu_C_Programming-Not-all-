#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int one = a /1000;
    int two = (a % 1000)/100;
    int three = ((a % 1000) % 100)/10;
    int four = ((a % 1000) % 100) % 10; 
    if (one >= 0 && two >= 5 && one <= 1 && two <= 9 && three >= 0 && three <= 5 && four >= 0 && four <= 9)
    {
        printf("%d%d:%d%d -> Morning",one,two,three,four);
    }
    else if (one == 1 && two >= 0 && two <= 8 && three >= 0 && three <= 5 && four >= 0 && four <= 9)
    {
        printf("%d%d:%d%d -> Noon", one, two, three, four);
    }
    else if ((one == 0 && two >= 0 && two <= 5 && three >= 0 && three <= 5 && four >= 0 && four <= 9) || (one >= 1 && one <= 2 && two >= 3 && two <= 8 && three >= 0 && three <= 5 && four >= 0 && four <= 9))
    {
        printf("%d%d:%d%d -> Night", one, two, three, four);
    }
    else if (one == 2 && two == 4)
    {
        printf("There is no 24 o'clock");
    }
    else
    {
        printf("There was no clock has that 60");
    }
    return 0;
}