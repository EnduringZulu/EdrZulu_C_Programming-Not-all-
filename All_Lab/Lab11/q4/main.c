// Given the code, please write a function `findmax` to take in 4 parameters of address of n1, n2, n3, and max.

//                                                                                                         The function prototype will be `void
//                                                                                                         findmax(int *x, int *y, int *z, int *max)`.

//                                                                                                         The program first recieves the value of n1,
//     n2, n3 from the user.Then, the function `findmax` is called from main().Among the three values of function parameters, the function `findmax` will then assign the maximum value to max variable.The result is printed in the main() as a final output.

//                                                                                                                                    **Case 1 *
//                                                                                                                                *

//                                                                                                                                Sample input :
// ``` 2 5 1
// ```

//     Sample output :
// ``` 5
// ```

//         **Case 2 * *

//                                                                                                                                Sample input :
// ``` 9 9 10
// ```

//     Sample output :
// ``` 10
// ```
#include <stdio.h>

// please write your method here
int findmax(int *x, int *y, int *z, int *max)
{
    if (*x > *y && *x > *z)
        *max = *x;
    else if (*y > *x && *y > *z)
        *max = *y;
    else if (*z > *x && *z > *y)
        *max = *z;
    else
        *max = *x;
}
int main(void)
{
    // do nothing in main()
    int n1, n2, n3, max = 0;
    scanf("%d %d %d", &n1, &n2, &n3);
    findmax(&n1, &n2, &n3, &max);
    printf("%d\n", max);
    return 0;
}