// ##Print a sequence of characters

//         Write a program that defines and uses a self -
//     defined function,
//     named `print_c` that prints a sequence of input characters based on an input number.

//         **Note ** : If you DO NOT define a `print_c` function in the submission,
//     your code will be graded as a ZERO score.

//         <hr />

//             **Case 1 *
//         *

//         Sample input :
// ``` 10 v
// ```

//     Sample output :
// ``` vvvvvvvvvv
// ```

//         **Case 2 *
//         *

//         Sample input :
// ``` 7 /
// ```

//         Sample output :
// ```
//     ///////
// ```
#include <stdio.h>

void print_c(int num, char char_inp)
{
    for (int i = 1; i <= num; i++)
    {
        printf("%c", char_inp);
    }
}

int main(void)
{
    int num;
    char char_inp;
    scanf("%d", &num);
    scanf(" %c", &char_inp);
    print_c(num, char_inp);
    return 0;
}