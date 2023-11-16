// Write a program to count the number of uppercase alphabets(A - Z) and lowercase alphabets(a - z) and digits(0 - 9) in an input string.The program ignores all of the symbols.

//                                                                                                      Output pattern :
// ``` <n_uppers><n_lowers><n_digits>
// ```

//                                                                                                          **Note ** : To simplify the problem,
//     you can assume that the length of the given input string in the test cases are always **less than or equal to 20 characters **.

//                                                                                                                      **Case 1 *
//                                                                                                                  *

//                                                                                                                  Sample input :
// ``` sa9ivlkj1 !#ja & *
// ``` Sample output :
// ``` 0 9 2
// ```

//                                                                                                                  * *Case 2 * *

//                                                                                                                              Sample input :
// ``` Good luck !
// ``` Sample output :
// ``` 1 7 0
// ```

//                                                                                                                  * *Case 3 * *

//                                                                                                                              Sample input :
// ``` !@ #$ % ^@
// ``` Sample output :
// ``` 0 0 0
// ```

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXSTR 40

int main(void)
{
    char strinput[MAXSTR];
    int count_upper = 0, count_lower = 0, count_digit = 0;
    fgets(strinput, MAXSTR, stdin);
    for (int i = 0; i < strlen(strinput); i++)
    {
        if (isupper(strinput[i]) != 0)
            count_upper++;
        if (islower(strinput[i]) != 0)
            count_lower++;
        if (isdigit(strinput[i]) != 0)
            count_digit++;
    }
    printf("%d %d %d", count_upper, count_lower, count_digit);
    return 0;
}