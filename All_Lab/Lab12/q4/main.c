// ##Comparing Three Strings

//         Write a program that uses the built -
//     in functions in `string.h` to compare THREE input strings.

//     In particular,
//     the program first receives three input strings(each has the maximum length of 10 characters).Then it determines whether three strings are all the same, all different, or neither.Finally, it prints out the output.

//                                                                                                                                                                                                        **Note ** : you can only compare two strings at a time.

//                                                                                                                                                                                                                    The following cases are the example of the inputs and their corresponding output.

//                                                                                                                                                                                                                    <hr>

//                                                                                                                                                                                                                        **Case 1 *
//                                                                                                                                                                                                    *

//                                                                                                                                                                                                    Sample input :
// ``` Hello Hello Hello
// ```

//     Sample output :
// ``` all the same
// ```

//         **Case 2 * *

//                                                                                                                                                                                                    Sample input :
// ``` How are you
// ```

//     Sample output :
// ``` all different
// ```

//         **Case 3 * *

//                                                                                                                                                                                                    Sample input :
// ``` again and again
// ```

//     Sample output :
// ``` neither
// ```
#include <stdio.h>
#include <string.h>

int main(void)
{
    char text1[20], text2[20], text3[20];
    scanf("%s %s %s", text1, text2, text3);
    if (strcmp(text1, text2) == 0 && strcmp(text2, text3) == 0)
        printf("all the same");
    else if (strcmp(text1, text2) != 0 && strcmp(text2, text3) != 0 && strcmp(text1, text3) != 0)
        printf("all different");
    else
        printf("neither");
    return 0;
}