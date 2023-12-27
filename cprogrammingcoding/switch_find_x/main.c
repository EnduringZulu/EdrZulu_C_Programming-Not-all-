#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(){
    int a,b,c;
    float x1,x2;
    scanf("%d%d%d",&a,&b,&c);
    int discreminant = pow(b,2)-(4*a*c);
    switch (discreminant)
    {
    case 0:
        x1 = (-b) / (2*a);
        printf("x = %.2f",x1);
        break;
    case 1 ... INT_MAX:
        x1 = ((-b) + sqrt(discreminant)) / 2 * a;
        x2 = ((-b) - sqrt(discreminant)) / 2 * a;
        printf("x = %.2f,%.2f\n",x1,x2);
        break;
    case INT_MIN ... - 1:
        printf("No solution\n");
        break;
    }
    return 0;
}