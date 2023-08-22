#include <stdio.h>

int main()
{
    float inp1,result;
    int inp2;
    scanf("%f\n%d", &inp1, &inp2);
    switch (inp2)
    {
    case 1:
        result = (inp1 * (9.00 / 5.00)) + 32;
        break;
    case 2:
        result = (inp1-32) * (5.00 / 9.00);
        break;
    default:
        break;
    }
    printf("%.2f",result);
    return 0;
}