// ## Prime number

// You are given a code skeleton for a program to determine whether an input integer is a prime number. Write the body of the function to complete the program.

// To simplify the problem, you can assume that the input integers in the test cases are always `>=2`.

// **Hint**: A natural number (1, 2, 3, 4, 5, 6, etc.) is called a **prime number** (or a **prime**) if it is greater than 1 and cannot be written as the product of two smaller natural numbers (i.e, it is ONLY divisible by 1 and itself).

// <hr />

// **Case 1**

// Sample input:
// ```
// 4
// ```
// Sample output:
// ```
// 4 is NOT a prime number.
// ```

// **Case 2**

// Sample input:
// ```
// 19
// ```
// Sample output:
// ```
// 19 is a prime number.
// ```
#include <stdio.h>

int is_prime();

int main(void)
{
    int num;
    scanf("%d", &num);
    if (is_prime(num))
        printf("%d is a prime number.", num);
    else
        printf("%d is NOT a prime number.", num);
    return 0;
}

// Write the function is_prime here
int is_prime(int num)
{
    int count = 0;
    for (int j = 1; j <= num; j++)
    {
        if (num % j == 0)
        {
            count++;
        }
    }
    if (count > 2)
    {
        return 0;
    }
    else if (count == 2)
    {
        return 1;
    }
}
// Hint: The is_prime function is used to determine
//       whether an input number is a prime number.
//       It returns 1 (i.e., true) when the input is a prime.
//       It returns 0 (i.e., false) when the input is not a prime.