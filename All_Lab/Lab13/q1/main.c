// Write a program to toggle character(A - Z, a - z) and replace underscore('_') with space(' ').

//                                                           **Note ** : To toggle character,
//     we change the lower case character to upper case character, and vice versa **.

//                                                                         **Note **:
// To simplify the problem, you can assume that the length of the given input string in the test cases are always **less than or equal to 20 characters **.

//                                                                                                                                       **Case 1 *
//                                                                                                                                   *

//                                                                                                                                   Sample input :
// ``` THIS_is_an_animal.
// ``` Sample output :
// ``` this IS AN ANIMAL.
// ```

//                                                                                                                                       **Case 2 *
//                                                                                                                                   *

//                                                                                                                                   Sample input :
// ``` Good_Luck
// ``` Sample output :
// ``` gOOD lUCK
// ```

//                                                                                                                                       **Case 3 *
//                                                                                                                                   *

//                                                                                                                                   Sample input :
// ``` ITCS_113
// ``` Sample output :
// ``` itcs 113
// ```

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_LEN 20

    int
    main(void)
{
    char text[MAX_LEN];
    fgets(text, MAX_LEN, stdin);
    for (int i = 0; i < strlen(text); i++)
    {
        if (islower(text[i]) != 0)
        {
            text[i] = toupper(text[i]);
        }
        else if (isupper(text[i]) != 0)
        {
            text[i] = tolower(text[i]);
        }
        else if (text[i] == '_')
        {
            text[i] = ' ';
        }
    }
    printf("%s", text);
    return 0;
}