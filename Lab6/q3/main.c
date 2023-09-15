#include <stdio.h>

int main()
{
    int n;
    int find;
    int found = -1;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &find);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == find)
        {
            found = i;
            break;
        }
    }
    if (found == -1)
    {
        printf("Not found");
    }
    else
    {
        printf("%d", found);
    }
    return 0;
}