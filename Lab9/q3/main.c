// ##Print a rectangle pattern

//         Reuse the `print_c` function from L9 -
//     Q2 to write a program that prints a rectangle pattern.The program receives the number of rows,
//     the number of columns, and a character to be printed.

//                                    **IMPORTANT ** : This exercise will test whether your `print_c` function can be reused in other problems.Please make sure that the function `print_c` in this question is EXACTLY the same as the **L9 -
//                                Q2 **.Otherwise,
//     your code will get a ZERO score.

//         <hr />

//             **Case 1 *
//         *

//         Sample input :
// ``` 4 17 c
// ```

//     Sample output :
// ``` ccccccccccccccccc
//         ccccccccccccccccc
//             ccccccccccccccccc
//                 ccccccccccccccccc
// ```

//                     **Case 2 *
//         *

//         Sample input :
// ``` 4 2 3
// ```

//     Sample output :
// ``` 33 33 33 33
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
    int num1, num2;
    char char_inp;
    scanf("%d %d", &num1, &num2);
    scanf(" %c", &char_inp);
    for (int i = 0; i < num1; i++)
    {
        print_c(num2, char_inp);
        printf("\n");
    }
    return 0;
}