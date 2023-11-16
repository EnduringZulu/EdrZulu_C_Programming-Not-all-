// Write a C program with **at least one self-defined functions that use `struct Student`** to calculate the grade of a student from ITCS113 given the proportion of the scores as follows:

// - Lab 15%
// - Quiz 25%
// - Midterm exam 25%
// - Final exam 35%

// The program first creates a variable from `struct Student` to store the student information including the name of a student, the score of the lab, quiz, midterm exam, and final exam. Then, the program asks a user to input the data one by one, for example,  
// ```
// Diluc 90 90 70 63.8
// ```
// Next, the program calculates the total score with the function `calTotal`
// ```
// /*
//     The function to the total score of given `struct Student`

//     return total_score that calculated from ((15x90)+(25x90)+(25x70)+(35x63.8))/100 = 75.83
// */

// float calTotal(struct Student s);
// ```

//     Finally,
//     the program prints out whether this student pass or fail :

//     -Score > 55,
//     "pass" - Score <= 55, "fail"

//                               * *Note ** : You must create and use `struct Student` to store data and create calTotal function that has `struct Student` as a parameter.Otherwise,
//     you will get a ZERO score.

//         **Case 1 : **

//                    Sample input :
// ```
// `Diluc 90 90 70 63.8`
// ``` Sample output :
// ``` Diluc's final score: 75.83 pass
// ```

//                        **Case 2 : **

//                                   Sample input :
// ``` Amber 10 20 30 40
// ``` Sample output :
// ``` Amber's final score: 28.00 fail,
//     see you next semester.
// ```

#include <stdio.h>

struct Student
{
    char name[20];
    float lab, quiz, mid_ex, final_ex;
};

/*
    The function to the total score of given `struct Student`
    return total_score that calculated from ((15x90)+(25x90)+(25x70)+(35x63.8))/100 = 75.83
*/
float calTotal(struct Student s);

int main(void)
{
    struct Student user;
    scanf("%s", user.name);
    scanf("%f %f %f %f", &user.lab, &user.quiz, &user.mid_ex, &user.final_ex);
    printf("%s's final score: %.2f\n", user.name, calTotal(user));
    if (calTotal(user) > 55)
        printf("pass");
    else
        printf("fail, see you next semester.");
    return 0;
}

float calTotal(struct Student s)
{
    float total_score = ((15 * s.lab) + (25 * s.quiz) + (25 * s.mid_ex) + (35 * s.final_ex)) / 100;
    return total_score;
}