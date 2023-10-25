/*
---------- Function Extra: Distance Calculation -----------
Student ID:
Name:
Surname:
Section:
-----------------------------------------------------------
*/

#include <stdio.h>
#include <math.h>

float cal_dist(int x1, int y1,int z1,int x2,int y2,int z2)
{
    // Your code started here.
    float distance;
    distance = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2) + pow((z1 - z2),2));
    printf("%.2f",distance);
}

int main(void)
{
    // Your code started here.
    int x1,y1,z1,x2,y2,z2;
    scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);
    cal_dist(x1, y1, z1, x2, y2, z2);
    return 0;
}