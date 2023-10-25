// ## Fill in function calls

// This exercise is to test whether you understand how the variable scope works in C programming. The given code is doing some computation, and we expect this program to print out `Answer: 86` as a result. Currently, the program prints out `Answer: 66`. 

// Please understand the current code and the provided `foo()` and `bar()` functions, and then add ONE `foo()` and ONE `bar()` function calls in `main()` function such as the program prints out `Answer: 86`.

// **IMPORTANT**: Your modification **MUST** be just adding `foo()` and `bar()` function call in `main()`. Other changes will result in a **ZERO** score.

// **Hint**: You should use `printf()` to print out the value of all variables to help you figure out where should you call `foo()` and `bar()` functions in `main()`.
#include <stdio.h>

int x = 5;
int b = 5;

void foo()
{
    x = 97;
}

void bar()
{
    int b = 3;
    b = b - 1;
    x = x - 2;
}

int main()
{
    x = 65;
    foo();
    for (int t = 10; t >= 0; t = t - 2)
    {
        x = x + 1;
        bar();
    }
    printf("Answer: %d", x - b);
    return 0;
}