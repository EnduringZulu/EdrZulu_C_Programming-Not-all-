#include <stdio.h>

int main(){
    float t,m;
    int y = 2023;
    scanf("%f %f",&t,&m);
    while(t<m){
        y++;
        t = t+(t*0.05);
        printf("Year:%d, Fee: %.2f\n",y,t);
    }
    printf("In %d, the final fee is %.2f Baht\n",y,t);
    return 0;
}