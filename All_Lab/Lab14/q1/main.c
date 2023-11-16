// Write a program to manage personal bank accounts.

//     You have to create a structure named `BankAccount` to store bank account information including : -*number * : a bank account number in 5 digits e.g.,
//     65421 - *bank * : a bank's name that issues the bank account e.g., Bangkok Bank, SCB, Kasikorn Bank (Maximum length is 20 characters) - *balance * : an amount of money in the bank account e.g., 1421.50

//     Then,
//     the program asks the user to input three bank accounts one by one.

//     Finally,
//     the program shows the total amount of money from all accounts **and**the information of all accounts as shown in the examples.

//         **NOTE ** : If you do not use `struct` to store `BankAccount` information,
//     you will get a ZERO score.

//             **Case 1 *
//         *

//         _Input_
// ``` 12345 Bangkok_Bank 2500 12346 SCB 300.50 12347 Kasikorn_Bank 1200.95
// ```

//         _Output_
// ``` Total amount : 4001.45 Bank Account #1 : 12345->2500.00 [Bangkok_Bank] Bank Account #2 : 12346->300.50 [SCB] Bank Account #3 : 12347->1200.95 [Kasikorn_Bank]
// ```

//             **Case 2 *
//         *

//         _Input_
// ``` 98766 Bangkok_Bank 0 98765 Bangkok_Bank 111.111 98764 Bangkok_Bank 999.999
// ```

//         _Output_
// ``` Total amount : 1111.11 Bank Account #1 : 98766->0.00 [Bangkok_Bank] Bank Account #2 : 98765->111.11 [Bangkok_Bank] Bank Account #3 : 98764->1000.00 [Bangkok_Bank]
// ```

#include <stdio.h>
#define MAX 20
struct BankAccount
{
    int bank_num;
    char bank_name[MAX];
    float bal;
};

int main()
{
    struct BankAccount user[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %s %f", &user[i].bank_num, user[i].bank_name, &user[i].bal);
    }
    printf("Total amount: %.2f\n", user[0].bal + user[1].bal + user[2].bal);
    for (int i = 0; i < 3; i++)
    {
        printf("Bank Account #%d: %d -> %.2f [%s]\n", i + 1, user[i].bank_num, user[i].bal, user[i].bank_name);
    }

    return 0;
}