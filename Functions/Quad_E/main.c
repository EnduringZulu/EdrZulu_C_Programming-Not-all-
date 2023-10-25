/*
------ Function Extra: Quadratic Equation -------
Student ID:
Name:
Surname:
Section:
-------------------------------------------------
*/

#include <stdio.h>
#include <math.h>

void quadratic(int a,int b,int c)
{
    // Your code started here.
    float D,root1,root2,output;
    D = pow((b),2) - (4 * a * c);
    if(D>0){
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots: %.2f %.2f", root1,root2);
    }else if(D==0){
        output = (float)-b / (2 * (float)a);
        printf("Root: %.2f",output);
    }else{
        printf("Invalid discriminant, can't compute in real number.");
    }
}

int main(void)
{
    // Your code started here.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    quadratic(a,b,c);
    return 0;
}