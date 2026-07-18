#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int res[n];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        res[i] = b - a;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", res[i]);
    }
    return 0;
}