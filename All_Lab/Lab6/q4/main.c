#include <stdio.h>

int main()
{
    int n, AB = 0;
    do
    {
        scanf("%d", &n);
    } while (n <= 0);
    int arr1[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int j = 0; j < n; j++)
    {
        scanf("%d ", &arr2[j]);
    }
    for (int i = 0; i < n; i++)
    {
        AB += arr1[i] * arr2[i];
    }
    printf("%d", AB);
    return 0;
}