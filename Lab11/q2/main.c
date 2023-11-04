// Write a program to compute the average of an array using a self - defined function, named `compute_avg`.

//                                                                                     The program first receives a positive integer `n`,
//     which specifies the size of the array.It then creates an array of size `n`, and asks the user to fill in all values.Next, it calls `compute_avg` to compute the average, which is then printed out with two decimal places in `compute_avg`.

//                                                                                                                                                                              The function prototype of `compute_avg` is :
// ``` void compute_avg(int *arr, int n);
// ```

//     **Note ** :

//     -You **MUST **use the "pass-by-reference" technique to pass the input array into the `compute_avg` function.Otherwise,
//     you will get a ZERO score.

//     Sample inputs :
// ``` 5 1 4 4 4 9
// ``` Sample outputs :
// ``` 4.40
// ```
#include <stdio.h>

void compute_avg(int *arr, int n);

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr_all_num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr_all_num[i]);
    }
    compute_avg(arr_all_num, n);
    return 0;
}

void compute_avg(int *arr, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("%.2f", sum / n);
}