// Write a program to sort THREE input values in _ascending_ order.You **MUST **define and use _two_ self - defined functions, named `swap` and `sort_values`, as follows :

// ``` void swap(int *x, int *y);
// void sort_values(int *x, int *y, int *z);
// ```

//         **Note : **

//                  -The `swap` function is used to swap the values of two input variables.-
//     The `sort_values` function is used to sort the input values.- In the `sort_values` function,
//     you **MUST **use the swap function to sort the input values.Otherwise, you will receive a **ZERO **score.

//                                                                                    **Case 1 *
//                                                                                *Sample input :
// ``` 3 2 1
// ``` Sample output :
// ``` 1 2 3
// ```

//                                                                                    **Case 2 *
//                                                                                *Sample input :
// ``` 2 99 8
// ``` Sample output :
// ``` 2 8 99
// ```
#include <stdio.h>

// write the functions here
void swap(int *x, int *y)
{
    int a, b;
    a = *x;
    b = *y;
    *x = b;
    *y = a;
}

void sort_values(int *x, int *y, int *z)
{
    if (*x >= *y && *x >= *z)
        swap(x, z);
    if (*y >= *z && *y >= *x)
        swap(y, z);
    if (*x >= *y)
        swap(x, y);
}

int main(void)
{
    //------the code is given here---//
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    sort_values(&n1, &n2, &n3);
    printf("%d %d %d\n", n1, n2, n3);
    return 0;
}
