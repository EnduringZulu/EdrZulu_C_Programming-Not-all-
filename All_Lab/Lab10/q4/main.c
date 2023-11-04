// ## Clip values in a 1-D array

// Write a program to clip the value of each element in a 1D array to be within a specific range.

// In particular, the program first asks a user to specify the size of an input 1D array and fill in all values. Then the program scans through all elements in the array and clips the value to be between `MIN_VAL` and `MAX_VAL` (inclusively), using a self-defined function, named `clip_value`. Finally, it prints out all of the values in the array.

// **IMPORTANT:**

// - You **MUST** define and use TWO global variables, named `MIN_VAL` and `MAX_VAL`, which specify the minimum and the maximum of the value in the array numbers. The values for `MIN_VAL` and `MAX_VAL` are -4 and 42, respectively. These `MIN_VAL` and `MAX_VAL` will be used in the function `clip_value`.
// - You **MUST** define and use a function, named `clip_value`, that clips (or limits) the value to be within the specified minimum and maximum values. 

// The following is the function prototype of the `clip_value` function:

// ```
// int clip_value(int v);
// ```

//     Here is an example *pseudocode *that shows the output from the `clip_value` function :

// ``` min = -4 max = 42 print(clip_value(13)) #13->no clip
//                     print(clip_value(4)) #4->no clip
//                         print(clip_value(-23)) # -
//                     4->clip to the min(-23 < min)
//                             print(clip_value(402)) #42->clip to the max(402 > max)
// ```

//                         * *Case 1 * *

//                                     Sample input :

// ``` 7 8 - 3 - 4 42 43 57 -
//                     19
// ```

//                     Sample output :

// ``` 8 -
//     3 - 4 42 42 42 - 4 
// ```
#include <stdio.h>

int MIN_VAL = -4;
int MAX_VAL = 42;
int clip_value(int v);

int main(void)
{
    int v;
    scanf("%d", &v);
    int arr_clip[v], arr2_clip[v];
    for (int i = 0; i < v; i++)
    {
        scanf("%d", &arr_clip[i]);
        arr2_clip[i] = clip_value(arr_clip[i]);
    }
    for (int i = 0; i < v; i++)
    {
        printf("%d ", arr2_clip[i]);
    }
    return 0;
}

int clip_value(int v)
{
    if (v >= MIN_VAL && v <= MAX_VAL)
    {
        return v;
    }
    else if (v < MIN_VAL)
    {
        return MIN_VAL;
    }
    else if (v > MAX_VAL)
    {
        return MAX_VAL;
    }
}