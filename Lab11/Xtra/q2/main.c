// Write your code in the provided sections to complete a program.

//     This program first finds and points the pointer `p_max` to the maximum of an input array.Then it replaces the maximum value with `42` via the pointer `p_max`.Finally,
//     the program prints out all of the values in the array.

//         **Note ** :

//     -You are **NOT **allowed to modify the other parts of the code,
//     except the provided sections.Otherwise, you will get a ZERO score.- Please read the *TODO *in the provided code.- If you **DO NOT **use the pointer or **DO NOT **follow the instructions in *TODO *to complete the program, you will get a ZERO score.

//                                                                                                                                                                                                                                          **Case 1 **Sample input :
// ``` 5 1 - 3 2 5 4
// ``` Sample output :
// ``` Replace max = 5 with 42 1 - 3 2 42 4 
// ```

//                                                                                                                                                                                                                                      **Case 2 **Sample input :
// ``` 3 15 15 15
// ``` Sample output :
// ``` Replace max = 15 with 42 42 15 15 
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

    int *p_max;

    ///// Start of you code /////
    // TODO: Point `p_max` to the element with the maximum value
    p_max = &arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > *p_max)
            p_max = &arr[i];
    }
    ///// End of you code /////

    printf("Replace max=%d with 42\n", *p_max);

    ///// Start of you code /////
    // TODO: Replace with max value with 42 using `p_max`
    *p_max = 42;
    ///// End of you code /////

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}