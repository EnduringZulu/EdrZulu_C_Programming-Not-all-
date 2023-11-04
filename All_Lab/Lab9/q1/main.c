// ## Simple Self-Defined Function

// Write a program that creates and uses a self-defined function, named `math_func`, that receives two input numbers and then calculate the output of the following equation:

// ```
// output = (a^2) - (2*a*b) - 42
// ```

// where `^` is the power operation. Finally, the program prints the output with TWO decimal places.

// **Hint**: You may find the built-in function `double pow(double x, double y)` defined in `math.h` useful for computing `x^y`.

// <hr />

// **Case 1**

// Sample input:
// ```
// 2.5 4.12
// ```

// Sample output:
// ```
// -56.35
// ```

// **Case 2**

// Sample input:
// ```
// 1 17
// ```

// Sample output:
// ```
// -75.00
// ```
#include <stdio.h>
#include <math.h>
// math_func
float math_func(float a, float b)
{
    float output = pow(a, 2) - (2 * a * b) - 42;
    return output;
}
// main
int main(void)
{
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%.2f", math_func(a, b));
    return 0;
}