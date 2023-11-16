// Write a program to summarize the Food that users eat in a day.Assume that there are always 3 meals to eat per day.

//     The program first creates a structure, named `Food`, to store food information including :

//     -*name * : a general name of food(no white space), e.g. "Hamburger", "Sushi", "Padthai" - *meal * : a number to indicate the meal of the day : 1 - breakfast,
//     2 - lunch,
//     3 - dinner
//         - *cal * : a number of calories of the food e.g. 1200.50, 424 

//     Then,
//     the program asks the user to input their meal one by one(from Meal #1 to Meal #3).Finally,
//     the program shows the total amount of calories in that day **and**the information of all meals

//         **Note ** : If you do not use `struct` to store `Food` info,
//                     you will get a ZERO score.

//                             **Case 1 : **

//                                        Sample input :
// ``` EggSandwich 1 500 Padthai 2 730.6 Steak 3 670.57
// ``` Sample output :
// ``` Total eat : 1901.17 1 -
//                         EggSandwich,
//                     2 - Padthai,
//                     3 - Steak
// ```

//                             **Case 2 : **

//                                        Sample input :
// ``` Sushi 1 268 SomTum 2 430.34 Mapotofu 3 533.04
// ``` Sample output :
// ``` Total eat : 1231.38 1 -
//     Sushi,
//                     2 - SomTum,
//                     3 - Mapotofu
// ```

#include <stdio.h>

struct Food
{
    char menu[50];
    int day;
    float cal;
};

int main(void)
{
    struct Food use1, use2, use3;
    scanf("%s %d %f", use1.menu, &use1.day, &use1.cal);
    scanf("%s %d %f", use2.menu, &use2.day, &use2.cal);
    scanf("%s %d %f", use3.menu, &use3.day, &use3.cal);
    printf("Total eat: %.2f\n", (use1.cal) + (use2.cal) + (use3.cal));
    printf("%d-%s,%d-%s,%d-%s", use1.day, use1.menu, use2.day, use2.menu, use3.day, use3.menu);
    return 0;
}