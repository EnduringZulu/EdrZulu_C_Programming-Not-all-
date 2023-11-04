// Write your code in the provided sections to complete a program to find the maximum and the minimum values of an input array.

//     **Note ** :

//     -You are **NOT **allowed to modify the other parts of the code,
//     except the provided sections.Otherwise, you will get a ZERO score.- Please read the TODO in the provided code.

//                                                                                 **Case 1 *
//                                                                             *Sample input :
// ``` 6 8 - 9 - 99 1 33 7
// ``` Sample output :
// ``` 33 -
//     99
// ```

//             **Case 2 *
//         *Sample input :
// ``` 4 42 42 42 42
// ``` Sample output :
// ``` 42 42
// ```
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *p_min;
    int *p_max;

    ////////////////// Start of your code //////////////////

    /*
        TODO:
          Point the pointers `p_min` and `p_max` to
          the minimum and the maximum values of the
          array `arr`.
    */
    p_min = &arr[0];
    p_max = &arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < *p_min)
            p_min = &arr[i];
        else if (arr[i] > *p_max)
            p_max = &arr[i];
    }

    ////////////////// End of your code //////////////////

    printf("%d %d\n", *p_max, *p_min);
    return 0;
}