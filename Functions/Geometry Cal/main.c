/*
---------- Function Extra: Geometry Calculator ------------
Student ID:
Name:
Surname:
Section:
-----------------------------------------------------------
*/

#include <math.h>
#include <stdio.h>
#include <string.h>

void area_cal(char alp);

int main(void)
{
    // Your code started here.
    char alp;
    scanf(" %c", &alp);
    area_cal(alp);
    return 0;
}

void area_cal(char alp)
{
    // Your code started here.
    float n, m, p, result;
    if (alp == 'S' || alp == 'C')
    {
        scanf("%f", &n);
    }
    else if (alp == 'R' || alp == 'T')
    {
        scanf("%f %f", &n, &m);
    }
    else if (alp == 'Z')
    {
        scanf("%f %f %f", &n, &m, &p);
    }
    else
    {
        printf("Sorry, I have no idea TT.");
    }
    char types[20];
    if (alp == 'S')
    {
        result = n * n;
        strcpy(types, "Square");
    }
    else if (alp == 'R')
    {
        result = n * m;
        strcpy(types, "Rectangle");
    }
    else if (alp == 'C')
    {
        result = 3.14 * n * n;
        strcpy(types, "Circle");
    }
    else if (alp == 'T')
    {
        result = 0.5 * n * m;
        strcpy(types, "Triangle");
    }
    else if (alp == 'Z')
    {
        result = 0.5 * (n + m) * p;
        strcpy(types, "Trapezoid");
    }
    if (alp == 'S' || alp == 'R' || alp == 'C' || alp == 'T' || alp == 'Z')
    {
        printf("Hi! The area of %s is equal to %.2f.", types, result);
    }
}