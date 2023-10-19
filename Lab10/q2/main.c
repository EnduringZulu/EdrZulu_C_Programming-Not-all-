// ##Find a bug

//     The given code is trying to multiply 2 adjacent numbers in the `DATA` array,
//     and print out the maximum value of the multiplication.From a quick check, the max value should be `6 * 7 = 42`, but this program prints out `0`.Please find and fix a bug in this program.

//                                                                                                                         **IMPORTANT ** : Your modification MUST be related to variable scope.Any cheating attempt to make the answer passes the test case will result in a **ZERO **score.

//                                                                                                                                              **Hint **:
// the bug involves variable scope.

#include <stdio.h>

    int DATA[8] = {0, 1, 2, 6, 7, 5, 4, 3};
int max_y = 0;
int i = 0;

int times(int numtimes)
{
    return DATA[i] * DATA[i + 1];
}

void loop(int len)
{
    int y;
    len = len - 1;
    for (int i = 0; i < len; i++)
    {
        y = times(i);
        if (max_y < y)
        {
            max_y = y;
        }
    }
}

int main()
{
    loop(8);
    printf("The answer is %d", max_y);
    return 0;
}