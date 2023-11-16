#include <stdio.h>
#define MAX 20
int num_play;
// Your struct or function prototype started here.
struct pokemon
{
    char name_poke[MAX];
    char element;
    float HP, spd, atk, def;
};
struct Tamerscard
{
    char name_play[MAX];
    int age;
    float win_rate, lose_rate;
    struct pokemon poke;
};

int main()
{
    // Your code started here.
    int max_turn, player1, player2;
    scanf("%d", &num_play);
    struct Tamerscard play[num_play];
    for (int i = 0; i < num_play; i++)
    {
        scanf("%s %d %f %f", play[i].name_play, &play[i].age, &play[i].win_rate, &play[i].lose_rate);
        scanf("%s %c %f %f %f %f", play[i].poke.name_poke, &play[i].poke.element, &play[i].poke.HP, &play[i].poke.spd, &play[i].poke.atk, &play[i].poke.def);
    }
    scanf("%d", &max_turn);
    scanf("%d %d", &player1, &player2);
}

// Your function definition started here (If any)
