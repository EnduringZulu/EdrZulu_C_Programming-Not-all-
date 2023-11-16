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
    int age, win_rate, lose_rate;
    struct pokemon poke;
};
float strong_atk(struct Tamerscard gotatk, struct Tamerscard atk);
float weak_atk(struct Tamerscard gotatk, struct Tamerscard atk);
float normal_atk(struct Tamerscard gotatk, struct Tamerscard atk);
int system(struct Tamerscard ply1_fast, struct Tamerscard ply2_slow);

int main()
{
    // Your code started here.
    int max_turn, player1, player2,old1,old2;
    scanf("%d", &num_play);
    struct Tamerscard play[num_play];
    for (int i = 0; i < num_play; i++)
    {
        scanf("%s %d %d %d", play[i].name_play, &play[i].age, &play[i].win_rate, &play[i].lose_rate);
        scanf("%s %c %f %f %f %f", play[i].poke.name_poke, &play[i].poke.element, &play[i].poke.HP, &play[i].poke.spd, &play[i].poke.atk, &play[i].poke.def);
    }
    scanf("%d", &max_turn);
    scanf("%d %d", &player1, &player2);
    old1 = play[player1].win_rate;
    old2 = play[player2].win_rate;
    if (play[player1].poke.spd > play[player2].poke.spd){
        printf("The first start is %s's %s\n", play[player1].name_play, play[player1].poke.name_poke);
        system(play[player1], play[player2]);
    }else{
        printf("The first start is %s's %s\n", play[player2].name_play, play[player2].poke.name_poke);
        system(play[player2], play[player1]);
    }
    if (play[player1].win_rate == old1+1)
    {
        printf("The winner is %s (%d) using %s (win: %d lose: %d)", play[player1].name_play, play[player1].age, play[player1].poke.name_poke, play[player1].win_rate, play[player1].lose_rate);
    }
    else{
        printf("The winner is %s (%d) using %s (win: %d lose: %d)", play[player2].name_play, play[player2].age, play[player2].poke.name_poke, play[player2].win_rate, play[player2].lose_rate);
    }
}

// Your function definition started here (If any)
float strong_atk(struct Tamerscard gotatk, struct Tamerscard atk)
{
    return (atk.poke.atk * 2) - gotatk.poke.def;
}
float weak_atk(struct Tamerscard gotatk, struct Tamerscard atk){
    return (atk.poke.atk * 0.5) - gotatk.poke.def;
}
float normal_atk(struct Tamerscard gotatk, struct Tamerscard atk){
    return (atk.poke.atk) - gotatk.poke.def;
}

int system(struct Tamerscard ply1_fast, struct Tamerscard ply2_slow)
{
    int i=1;
    
    while (ply1_fast.poke.HP > 0 || ply2_slow.poke.HP > 0)
    {
        if ((ply1_fast.poke.element == 'F' && ply2_slow.poke.element == 'P') || (ply1_fast.poke.element == 'W' && ply2_slow.poke.element == 'F') || (ply1_fast.poke.element == 'P' && ply2_slow.poke.element == 'W'))
        {
            if (ply2_slow.poke.HP - strong_atk(ply2_slow, ply1_fast)<0){
                printf("Turn %d: %s causes %.2f the damage to %s, HP of %s drops from %.2f to 0.00\n", i, ply1_fast.poke.name_poke, strong_atk(ply2_slow, ply1_fast), ply2_slow.poke.name_poke, ply2_slow.poke.name_poke, ply2_slow.poke.HP);
            }else{
                printf("Turn %d: %s causes %.2f the damage to %s, HP of %s drops from %.2f to %.2f\n", i, ply1_fast.poke.name_poke, strong_atk(ply2_slow, ply1_fast), ply2_slow.poke.name_poke, ply2_slow.poke.name_poke, ply2_slow.poke.HP, ply2_slow.poke.HP - strong_atk(ply2_slow, ply1_fast));
            }
            ply2_slow.poke.HP -= strong_atk(ply2_slow, ply1_fast);
            i++;
            if (ply2_slow.poke.HP <= 0.00){
                ply1_fast.win_rate++;
                break;    
            }
            if (ply1_fast.poke.HP - weak_atk(ply1_fast, ply2_slow)<0){
                printf("Turn %d: %s causes %.2f the damage to %s, HP of %s drops from %.2f to 0.00\n", i, ply2_slow.poke.name_poke, weak_atk(ply1_fast, ply2_slow), ply1_fast.poke.name_poke, ply1_fast.poke.name_poke, ply1_fast.poke.HP, ply1_fast.poke.HP - weak_atk(ply1_fast, ply2_slow));
            }else{
                printf("Turn %d: %s causes %.2f the damage to %s, HP of %s drops from %.2f to %.2f\n", i, ply2_slow.poke.name_poke, weak_atk(ply1_fast, ply2_slow), ply1_fast.poke.name_poke, ply1_fast.poke.name_poke, ply1_fast.poke.HP, ply1_fast.poke.HP - weak_atk(ply1_fast, ply2_slow));
            }
                
            ply1_fast.poke.HP -= weak_atk(ply1_fast, ply2_slow);
            i++;
            if (ply1_fast.poke.HP <= 0.00){
                ply2_slow.win_rate++;
                break;
            }
        }
        else if ((ply1_fast.poke.element == 'P' && ply2_slow.poke.element == 'F') || (ply1_fast.poke.element == 'F' && ply2_slow.poke.element == 'W') || (ply1_fast.poke.element == 'W' && ply2_slow.poke.element == 'P')){
            printf("Turn %d: %s causes %.2f the damage to %s, HP of %s drops from %.2f to %.2f\n", i, ply1_fast.poke.name_poke, weak_atk(ply2_slow, ply1_fast), ply2_slow.poke.name_poke, ply2_slow.poke.name_poke, ply2_slow.poke.HP, ply2_slow.poke.HP - weak_atk(ply2_slow, ply1_fast));
            ply2_slow.poke.HP -= weak_atk(ply2_slow, ply1_fast);
            i++;
            if (ply2_slow.poke.HP <= 0,00)
            {
                *ply1_fast.win_rate++;
                break;
            }
            printf("Turn %d: %s causes %.2f the damage to %s, HP of %s drops from %.2f to %.2f\n", i, ply2_slow.poke.name_poke, strong_atk(ply1_fast, ply2_slow), ply2_slow.poke.name_poke, ply2_slow.poke.name_poke, ply2_slow.poke.HP, ply2_slow.poke.HP - strong_atk(ply1_fast, ply2_slow));
            ply1_fast.poke.HP -= strong_atk(ply1_fast, ply2_slow);
            i++;
            if (ply1_fast.poke.HP <= 0.00)
            {
                ply2_slow.win_rate++;
                break;
            }
        }
        else if ((ply1_fast.poke.element == 'P' && ply2_slow.poke.element == 'P') || (ply1_fast.poke.element == 'F' && ply2_slow.poke.element == 'F') || (ply1_fast.poke.element == 'W' && ply2_slow.poke.element == 'W')){
            printf("Turn %d: %s causes %.2f the damage to %s, HP of %s drops from %.2f to %.2f\n", i, ply1_fast.poke.name_poke, normal_atk(ply2_slow, ply1_fast), ply1_fast.poke.name_poke, ply1_fast.poke.name_poke, ply1_fast.poke.HP, ply1_fast.poke.HP - normal_atk(ply2_slow, ply1_fast));
            ply2_slow.poke.HP -= normal_atk(ply2_slow, ply1_fast);
            i++;
            if (ply2_slow.poke.HP <= 0.00)
            {
                ply1_fast.win_rate++;
                break;
            }
            printf("Turn %d: %s causes %.2f the damage to %s, HP of %s drops from %.2f to %.2f\n", i, ply2_slow.poke.name_poke, normal_atk(ply1_fast, ply2_slow), ply2_slow.poke.name_poke, ply2_slow.poke.name_poke, ply2_slow.poke.HP, ply2_slow.poke.HP - normal_atk(ply1_fast, ply2_slow));
            ply1_fast.poke.HP -= normal_atk(ply1_fast, ply2_slow);
            i++;
            if (ply1_fast.poke.HP <= 0.00)
            {
                ply2_slow.win_rate++;
                break;
            }
        }
        else{
            printf("Turn %d: %s causes %.2f the damage to %s, HP of %s drops from %.2f to %.2f\n", i, ply1_fast.poke.name_poke, normal_atk(ply2_slow, ply1_fast), ply1_fast.poke.name_poke, ply1_fast.poke.name_poke, ply1_fast.poke.HP, ply1_fast.poke.HP - weak_atk(ply2_slow, ply1_fast));
            ply2_slow.poke.HP -= weak_atk(ply2_slow, ply1_fast);
            i++;
            if (ply2_slow.poke.HP <= 0)
            {
                ply1_fast.win_rate++;
                break;
            }
            printf("Turn %d: %s causes %.2f the damage to %s, HP of %s drops from %.2f to %.2f\n", i, ply2_slow.poke.name_poke, normal_atk(ply1_fast, ply2_slow), ply2_slow.poke.name_poke, ply2_slow.poke.name_poke, ply2_slow.poke.HP, ply2_slow.poke.HP - weak_atk(ply1_fast, ply2_slow));
            ply1_fast.poke.HP -= weak_atk(ply1_fast, ply2_slow);
            i++;
            if (ply1_fast.poke.HP <= 0)
            {
                ply2_slow.win_rate++;
                break;
            }
        }
    }
}