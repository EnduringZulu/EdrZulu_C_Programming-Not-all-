// Given the code, please try to understand the program.Then, please modify the code by introducing a pointer variable `ptr` to keep the address of `k` variable.Then, replace all `k` variable with a pointer variable `ptr`.

//                                                                                                                                                                             **Case 1 *
//                                                                                                                                                                         *

//                                                                                                                                                                         Sample input :
// ``` 1
// ```

//     Sample output :
// ``` 6
// ```

//         **Case 2 * *

//                                                                                                                                                                         Sample input :
// ``` 20
// ```

//     Sample output :
// ``` 30
// ```
#include <stdio.h>

int main(void)
{
    int k;
    scanf("%d", &k);

    //----start to edit the code here----//

    int *ptr = &k;

    // ptr declaration and assignment
    // from here you should replace k with a pointer ptr

    int a = *ptr;
    int b = a + *ptr;
    if (*ptr > 10)
    {
        *ptr = *ptr + 10;
    }
    else
    {
        *ptr = *ptr + 5;
    }
    printf("%d\n", k);

    //-----------end here-----------//

    return 0;
}