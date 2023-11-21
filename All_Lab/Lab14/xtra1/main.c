// Create ``BankAccount`` structure same as ``L14-Q1``, then, write two functions as follow:

// 1) The ``deposit`` function takes a bank account and an amount to deposit as inputs,
//    and adds the amount to the bank account balance.
//    _Note_ that the balance of the given bank account must be updated, and reflected in the ``main`` program.

// 2) The ``withdraw`` function takes a bank account and an amount to withdraw as inputs.
//     Then the program determines whether there is a sufficient amount of money available 
//     in the bank account to process a withdrawal or not.
//     - If there is sufficient balance, the amount is subtracted from the bank account balance and 
//       the function returns 1
//     - Otherwise, the function does nothing and returns 0

// The ``main`` function is acted as an ATM machine that allows the users to deposit or withdraw money from the bank account. There are three options ``1-deposit``, ``2-withdraw``, and ``0-end program``. Example cases are shown below.


// **Case 1**

// _Input_
// ```
// 1 500
// 2 2000
// 0
// ```

// _Output_
// ```
// Original Balance: 12345 -> 2000.00
// Deposit 500.00
// Available Balance: 12345 -> 2500.00
// Withdraw 2000.00 ~ Sufficient Balance
// Available Balance: 12345 -> 500.00
// End Program ~ Bye
// ```


// **Case 2**

// _Input_
// ```
// 1 500
// 2 2000
// 2 1000
// 1 500
// 2 1000
// 0
// ```

// _Output_
// ```
// Original Balance: 12345 -> 2000.00
// Deposit 500.00
// Available Balance: 12345 -> 2500.00
// Withdraw 2000.00 ~ Sufficient Balance
// Available Balance: 12345 -> 500.00
// Withdraw 1000.00 ~ Insufficient Balance
// Available Balance: 12345 -> 500.00
// Deposit 500.00
// Available Balance: 12345 -> 1000.00
// Withdraw 1000.00 ~ Sufficient Balance
// Available Balance: 12345 -> 0.00
// End Program ~ Bye
// ```

// **Case 3**

// _Input_
// ```
// 2 1500
// 1 3000
// 1 200
// 1 300
// 2 1500
// 2 1500
// 2 1500
// 0
// ```

// _Output_
// ```
// Original Balance: 12345 -> 2000.00
// Withdraw 1500.00 ~ Sufficient Balance
// Available Balance: 12345 -> 500.00
// Deposit 3000.00
// Available Balance: 12345 -> 3500.00
// Deposit 200.00
// Available Balance: 12345 -> 3700.00
// Deposit 300.00
// Available Balance: 12345 -> 4000.00
// Withdraw 1500.00 ~ Sufficient Balance
// Available Balance: 12345 -> 2500.00
// Withdraw 1500.00 ~ Sufficient Balance
// Available Balance: 12345 -> 1000.00
// Withdraw 1500.00 ~ Insufficient Balance
// Available Balance: 12345 -> 1000.00
// End Program ~ Bye
// ```

#include <stdio.h>

/*
Structure BankAccount from L14-Q1
*/
// YOUR CODE GOES HERE
#define MAX 20
struct BankAccount
{
    int number;
    char bank_name[MAX];
    float balance;
};

/*
    The deposit function takes a bank account and an amount to deposit as inputs,
    and adds the amount to the bank account balance.
*/
// YOUR CODE GOES HERE
float deposit(struct BankAccount *acc, float depos)
{
    acc->balance += depos;
    return 0;
}

/*
    The withdraw function takes a bank account and an amount to withdraw as inputs.
    Then the program determines whether there is a sufficient amount of money available
    in the bank account to process a withdrawal or not.
    - If there is, the amount is subtracted from the bank account balance and
      the function returns 1
    - Otherwise, the function does nothing and returns 0

*/
// YOUR CODE GOES HERE
float withdraw(struct BankAccount *acc, float withdraw)
{
    if (acc->balance - withdraw >= 0)
    {
        acc->balance -= withdraw;
        return 1;
    }
    else
    {
        return 0;
    }
}

// DO NOT MODIFY THE MAIN METHOD
int main(void)
{

    struct BankAccount acc = {12345, "Bangkok_Bank", 2000};
    printf("Original Balance: %d -> %.2f\n", acc.number, acc.balance);

    int opt; // 1-deposit, 2-withdraw, 0-end program
    float amount;

    scanf("%d", &opt);
    while (opt != 0)
    {
        scanf("%f", &amount);

        if (opt == 1)
        {
            printf("Deposit %.2f\n", amount);
            deposit(&acc, amount);
        }
        else
        {
            int success = withdraw(&acc, amount);
            if (success)
            {
                printf("Withdraw %.2f ~ Sufficient Balance\n", amount);
            }
            else
            {
                printf("Withdraw %.2f ~ Insufficient Balance\n", amount);
            }
        }
        printf("Available Balance: %d -> %.2f\n", acc.number, acc.balance);
        scanf("%d", &opt);
    }

    printf("End Program ~ Bye");
    return 0;
}