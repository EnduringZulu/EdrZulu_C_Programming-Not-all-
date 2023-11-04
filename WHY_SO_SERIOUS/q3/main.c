#include <stdio.h>
//No string.h version
/*
int main(){
    int n;
    scanf("%d",&n);
    int M = n / 1000;
    int D = (n % 1000) / 500;
    int C = (n % 1000) % 500 / 100;
    int L = ((n % 1000) % 500) % 100 / 50;
    int X = ((((n % 1000) % 500) % 100) % 50)/10;
    int V = (((((n % 1000) % 500) % 100) % 50) % 10)/5;
    int I = ((((((n % 1000) % 500) % 100) % 50) % 10) % 5);
    int arrchar[7] = {M, D, C, L,X,V,I};
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < arrchar[i]; j++)
        {
            if (i == 0)printf("M");
            else if (i == 1)printf("D");
            else if (i == 2)printf("C");
            else if (i == 3)printf("L");
            else if(i==4)printf("X");
            else if(i==5)printf("V");
            else if(i==6)printf("I");
        }
    }
    return 0;
}
*/