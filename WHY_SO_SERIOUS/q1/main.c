#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int res1 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int res2;
            if (arr[i] < arr[j])
            {
                res2 = arr[i] * (j - i);
            }
            else
            {
                res2 = arr[j] * (j - i);
            }
            if (res2 > res1)
            {
                res1 = res2;
            }
        }
    }
    printf("%d", res1);
    return 0;
}