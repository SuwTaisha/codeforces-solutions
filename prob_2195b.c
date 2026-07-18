#include <stdio.h>

int main()
{
    int t;

    scanf("%d", &t);

    while (t--)
    {
        int n, flag = 1;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            int a, j = i;
            scanf("%d", &a);

            while (a % 2 == 0)
                a /= 2;
            while (j % 2 == 0)
                j /= 2;

            if (a != j)
                flag = 0;
        }
        printf(flag ? "YES\n" : "NO\n");
    }
    return 0;
}