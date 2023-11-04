// The program first receives a positive 3 integer numbers.

//     Write a function named `sum` that accepts 3 integer numbers and return the total value as an integer number to
//     main()
//         .

//     Then,
//     print the returned value from main().

//             **Case 1 *
//         *Sample inputs :
// ``` 1 2 3
// ``` Sample outputs :
// ``` 6
// ```
//             **Case 2 *
//         *Sample inputs :
// ``` 4 4 4
// ``` Sample outputs :
// ``` 12
// ```
#include <stdio.h>

int sum(int x, int y, int z)
{
    return x + y + z;
}

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", sum(a, b, c));

    return 0;
}