// ## Extra Practices for Refactor code using function

// Modify the code to reduce duplicated code using function while maintaining the current functionality.

// First, you need to understand the code.
// Then you extract a function that can be reused.
// Finally, apply the defined function to reduce code duplication.
// #include <stdio.h>

// int main() {
//   int i, start, end, step;
//   start = 0;
//   end = 10;
//   step = 1;
//   for (i = start; i <= end; i += step) {
//     printf("%d ", i);
//   }
//   printf("\n");
//   start = -9;
//   end = 4;
//   step = 2;
//   for (i = start; i <= end; i += step) {
//     printf("%d ", i);
//   }
//   printf("\n");
//   start = -30;
//   end = 90;
//   step = 5;
//   for (i = start; i <= end; i += step) {
//     printf("%d ", i);
//   }
//   printf("\n");
//   return 0;
// }

#include <stdio.h>

void funcloop_printf(int start, int end, int step)
{
    for (int i = start; i <= end; i += step)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    funcloop_printf(0, 10, 1);
    funcloop_printf(-9, 4, 2);
    funcloop_printf(-30, 90, 5);
    return 0;
}
