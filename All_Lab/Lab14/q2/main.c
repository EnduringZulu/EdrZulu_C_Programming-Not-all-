// Write a program to create an array of BankAccount structures containing the following values :

//     |
//     Acc.Number | Bank Name | Balance |
//     | -- -- -- -- -- - | -- -- -- -- -- -- | -- -- -- -- -- - |
//     | 11111 | Bangkok_Bank | 100.50 |
//     | 12345 | Bangkok_Bank | 333.33 |
//     | 65444 | SCB | 999.90 |
//     | 34545 | SCB | 5000.55 |

//     Then,
//     display each bank account information from the last record to the first record.

//         **Expected Output **
// ``` 34545->5000.55 [SCB] 65444 -> 999.90 [SCB] 12345 -> 333.33 [Bangkok_Bank] 11111 -> 100.50 [Bangkok_Bank]
// ```

#include <stdio.h>
#define MAX 20

struct BankAccount
{
    int bank_num;
    char bank_name[MAX];
    float bal;
};

int main(void)
{
    struct BankAccount user[4] = {{11111, "Bangkok_Bank", 100.50},
                                  {12345, "Bangkok_Bank", 333.33},
                                  {65444, "SCB", 999.90},
                                  {34545, "SCB", 5000.55}};
    for (int i = 3; i >= 0; i--)
    {
        printf("%d -> %.2f [%s]\n", user[i].bank_num, user[i].bal,
               user[i].bank_name);
    }
    return 0;
}