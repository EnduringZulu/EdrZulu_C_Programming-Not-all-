// Write a C program to count how many fatty foods the user eats from their 3 meals.For this program, you must use `struct Food` from `Lab13 / Q3` and create a self - defined function as defined in the prototype below.

// ```
//                                                                                                                                                                     /*
//                                                                                                                                                                         The function to determine whether an
//                                                                                                                                                                         input food is a fatty food or not. The
//                                                                                                                                                                         fatty food is the one whose caleries
//                                                                                                                                                                         are more than 500.

//                                                                                                                                                                         - If the input food is NOT a fatty food, it returns 0.
//                                                                                                                                                                         - Otherwise, it returns 1.
//                                                                                                                                                                     */
//                                                                                                                                                                     int isFattyFood(struct Food f);
// ```

//     The program first asks the user to input their meals one by one storing in the
//     structures(from Meal #1 to Meal #3)
//         .Then,
//     the program determine whether each meal is a fatty food using the `isFattyFood` function.Finally, the program counts the number of fatty meals the user has had and prints the outputs.

//                                                                                                           **Case 1 : **

//                                                                                                                      Sample input :
// ``` EggSandwich 1 500 Padthai 2 730.6 Steak 3 670.57
// ``` Sample output :
// ``` You have 2 meal(s) exceed 500 cal.
// ```

//                                                                                                                          **Case 2 : **

//                                                                                                                                     Sample input :
// ``` Sushi 1 268 SomTum 2 430.34 Mapotofu 3 533.04
// ``` **Sample output : **
// ``` You have 1 meal(s) exceed 500 cal.
// ```

//                            **Case 3 : **Sample input :
// ``` AppleBanana 1 268 ClearSoup 2 330.34 Salad 3 499.99
// ``` Sample output :
// ``` No fatty food.You are good.
// ```

#include <stdio.h>

struct Food
{
    char menu[50];
    int day;
    float cal;
};

/*
    The function to determine whether an
    input food is a fatty food or not. The
    fatty food is the one whose caleries
    are more than 500.
    - If the input food is NOT a fatty food, it returns 0.
    - Otherwise, it returns 1.
*/
int isFattyFood(struct Food f);

int main(void)
{
    struct Food use1, use2, use3;
    int count = 0;
    scanf("%s %d %f", use1.menu, &use1.day, &use1.cal);
    scanf("%s %d %f", use2.menu, &use2.day, &use2.cal);
    scanf("%s %d %f", use3.menu, &use3.day, &use3.cal);
    if (isFattyFood(use1) == 1)
        count++;
    if (isFattyFood(use2) == 1)
        count++;
    if (isFattyFood(use3) == 1)
        count++;
    if (count != 0)
        printf("You have %d meal(s) exceed 500 cal.", count);
    else
    {
        printf("No fatty food. You are good.");
    }
    return 0;
}

int isFattyFood(struct Food f)
{
    if (f.cal < 500)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}