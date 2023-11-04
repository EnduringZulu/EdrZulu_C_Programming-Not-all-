// Write a program that uses the built - in functions in `string.h` to concatenate THREE input strings.

//                                       In particular,
//     the program first receives three input strings(each has the maximum length of 10 characters).Then it combines these strings using commas(`,`).Finally, it prints out the output.

//                                                                                                                                                                    **Note * *
//                                                                                                                                                                -You are **NOT **allowed to use `printf("%s,%s,%s", str1, str2, str3);
// `.Otherwise, you will get a ZERO score.- You **MUST **use the built - in functions such as `strcat()`, `strcpy()`, etc.to concatenate three strings and store the output strings in a new array(let’s say `all_strs`).- *Please make sure that the new array has enough room to store all characters from the three strings.*-You should use `printf("%s", all_strs);
// ` to print the output.

//     The following cases are the example of the inputs and their corresponding output.

//         **Case 1 : **

//                    Sample input :
// ``` hello
//                        World !students
// ``` Sample output :
// ``` hello,
//     World !, students 
// ```

//                      **Case 2 : **

//                                 Sample input :
// ``` !$ *
//     !1 MUICT Mahidol
// ``` Sample output :
// ``` !$ * !1,
//     MUICT, Mahidol 
// ```
#include <stdio.h>
#include <string.h>

#define N 40
int main(void)
{
    char text[N];
    char all_strs[N];
    for (int i = 0; i < 3; i++)
    {
        fgets(text, N, stdin);
        int *pos;
        if ((pos = strchr(text, '\n')) != NULL && i != 2)
            *pos = ',';
        if (i == 0)
            strcpy(all_strs, text);
        else if (i != 0)
            strcat(all_strs, text);
    }
    printf("%s", all_strs);
    return 0;
}