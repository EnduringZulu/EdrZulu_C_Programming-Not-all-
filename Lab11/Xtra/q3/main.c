// ##Sort Three Strings

//         Write a program that uses the built -
//     in functions in `string.h` to sort THREE input strings.

//     In particular,
//     the program first receives three input strings(each has the maximum length of 10 characters).Then it sorts them in ascending order(A - Z).Finally, it prints out the output.

//                                                                                                                                                            The following cases are the example of the inputs and their corresponding output.

//                                                                                                                                                            <hr>

//                                                                                                                                                                **Case 1 *
//                                                                                                                                                            *

//                                                                                                                                                            Sample input :
// ``` zero one two
// ```

//     Sample output :
// ``` one two zero
// ```

//         **Case 2 * *

//                                                                                                                                                            Sample input :
// ``` Jan Feb Mar
// ```

//     Sample output :
// ``` Feb Jan Mar
// ```

//         **Case 3 * *

//                                                                                                                                                            Sample input :
// ``` ITCS113 itcs113 @itcs113
// ```

//     Sample output :
// ``` @itcs113 ITCS113 itcs113
// ```
#include <stdio.h>
#include <string.h>
#define N 20
void swap(char **arrx, char **arry)
{
    char *x = *arrx;
    *arrx = *arry;
    *arry = x;
}

int main(void)
{
    char *arr1, *arr2, *arr3;
    scanf("%ms %ms %ms", &arr1, &arr2, &arr3);
    if (arr1[0] > arr2[0] && arr1[0] > arr3[0])
        swap(&arr1, &arr3);
    if (arr2[0] > arr3[0] && arr2[0] > arr1[0])
        swap(&arr2, &arr3);
    if (arr1[0] > arr2[0])
        swap(&arr1, &arr2);
    printf("%s\n%s\n%s", arr1, arr2, arr3);
    return 0;
}