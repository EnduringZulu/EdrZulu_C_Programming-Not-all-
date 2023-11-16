// Write a C program to search all occurrences of a character in a string using loop. How to find all occurrences of a character in a given string using for loop in C programming. Program to print all index of a character in a given string. 

// **Note**

// Below is the step by step descriptive logic to find all occurrences of a character in given string.

// - Input string from user, store it in some variable say `str`.
// - Input character to search from user, store it in some variable say `toSearch`.
// - Run a loop from start till end of the string. Define a loop with structure `while(str[i] != '\0')`.
// - Inside the loop, if current character of `str` equal to `toSearch`, then print the current string index.
// - If there is no matching at all, print string `none`
// - The maximum length of the input string is 20.
 

// **Case 1:**

// Sample input: `str`: I love ICT. ,`toSearch`: 'o'  
// ```
// I love ICT.
// o
// ```
// Sample output:
// ```
// 'o' is found at index 3
// ```

// **Case 2:**

// Sample input: `str`: Calendar ,`toSearch`: 'a'  
// ```
// Calendar
// a
// ```
// Sample output:
// ```
// 'a' is found at index 1
// 'a' is found at index 6
// ```

// **Case 3:**

// Sample input: `str`: Nothing ,`toSearch`: 'a'  
// ```
// Nothing
// a
// ```
// Sample output:
// ```
// none
// ```

#include <stdio.h>
#include <string.h>

#define MAXLENGTH 20

struct loop
{
    char str[MAXLENGTH];
    char toSearch;
};
int main(void)
{
    struct loop str, toSearch;
    fgets(str.str, MAXLENGTH, stdin);
    scanf("%c", &str.toSearch);
    int i = 0, j = 0;
    while (str.str[i] != '\0')
    {
        if (str.str[i] == str.toSearch)
        {
            printf("'%c' is found at index %d\n", str.toSearch, i);
            j++;
        }
        i++;
    }
    if (j == 0)
        printf("none");
    return 0;
}