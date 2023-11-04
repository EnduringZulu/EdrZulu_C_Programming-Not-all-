#include <stdio.h>

int main()
{
    char inp1;
    scanf("%c", &inp1);
    switch (inp1)
    {
    case 'M':
        printf("Mastery");
        break;
    case 'm':
        printf("Mastery");
        break;
    case 'H':
        printf("Harmony");
        break;
    case 'h':
        printf("Harmony");
        break;
    case 'I':
        printf("Integrity");
        break;
    case 'i':
        printf("Integrity");
        break;
    case 'D':
        printf("Determination");
        break;
    case 'd':
        printf("Determination");
        break;
    case 'O':
        printf("Originality");
        break;
    case 'o':
        printf("Originality");
        break;
    case 'L':
        printf("Leadership");
        break;
    case 'l':
        printf("Leadership");
        break;
    default:
        printf("Invalid character");
        break;
    }
    return 0;
}