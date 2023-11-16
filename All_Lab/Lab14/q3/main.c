// Create a new structure named ``Date`` containing ``day``, ``month``, and ``year`` variables. Then, use ``typedef`` to give a short name ``DATE`` to the ``Date`` structure.

// Modify the ``BankAccount`` structure from the ``L14-Q1`` by adding another variable named ``issued`` with type ``DATE`` to represent the issued date of the bank account.

// Create a self-defined function named ``account_compare`` which takes two bank accounts ``a``, and ``b``. The function compares the issued date between two bank accounts. If account ``a`` and account ``b`` are issued on the same date, the function returns ``0``. If account ``a`` is issued before account ``b``, the function returns ``-1``. If account ``a`` is issued after account ``b``, the function returns ``1``.

// The ``main`` program asks for input from users to create two bank accounts, displays bank account info, and finally compares the issued date of those two accounts.


// **Case 1**

// _Input_
// ```
// 12345 Bangkok_Bank 18 11 2021 1500.50
// 98765 SCB 20 11 2021 900.90
// ```

// _Output_
// ```
// First Account 12345 (18-11-2021) 1500.50 [Bangkok_Bank]
// Second Account 98765 (20-11-2021) 900.90 [SCB]
// Compare two accounts: -1
// ```

// **Case 2**

// _Input_
// ```
// 12344 Bangkok_Bank 18 11 2021 200.50
// 98764 Kasikorn_Bank 18 11 2021 300.30
// ```

// _Output_
// ```
// First Account 12344 (18-11-2021) 200.50 [Bangkok_Bank]
// Second Account 98764 (18-11-2021) 300.30 [Kasikorn_Bank]
// Compare two accounts: 0
// ```

// **Case 3**

// _Input_
// ```
// 22344 Kasikorn_Bank 15 10 2022 1200.45
// 78764 Bangkok_Bank 18 11 2021 3030.30
// ```

// _Output_
// ```
// First Account 22344 (15-10-2022) 1200.45 [Kasikorn_Bank]
// Second Account 78764 (18-11-2021) 3030.30 [Bangkok_Bank]
// Compare two accounts: 1
// ```

#include <stdio.h>
#define MAX 20

struct Date
{
    int day, month, year;
};
typedef struct Date DATE;
struct BankAccount
{
    int bank_num;
    char bank_name[MAX];
    float bal;
    DATE dat;
};

int account_compare(struct BankAccount a, struct BankAccount b);

int main(void)
{
    struct BankAccount user[2];
    for (int i = 0; i < 2; i++)
    {
        scanf("%d %s %d %d %d %f", &user[i].bank_num, user[i].bank_name,
              &user[i].dat.day, &user[i].dat.month, &user[i].dat.year,
              &user[i].bal);
    }
    printf("First Account %d (%d-%d-%d) %.2f [%s]\n", user[0].bank_num,
           user[0].dat.day, user[0].dat.month, user[0].dat.year, user[0].bal,
           user[0].bank_name);
    printf("Second Account %d (%d-%d-%d) %.2f [%s]\n", user[1].bank_num,
           user[1].dat.day, user[1].dat.month, user[1].dat.year, user[1].bal,
           user[1].bank_name);
    printf("Compare two accounts: %d", account_compare(user[0], user[1]));
    return 0;
}

int account_compare(struct BankAccount a, struct BankAccount b)
{
    if (a.dat.day == b.dat.day && a.dat.month == b.dat.month &&
        a.dat.year == b.dat.year)
    {
        return 0;
    }
    else if ((a.dat.year < b.dat.year) ||
             (a.dat.year <= b.dat.year && a.dat.month <= b.dat.month &&
              a.dat.day < b.dat.day))
    {
        return -1;
    }
    else
    {
        return 1;
    }
}