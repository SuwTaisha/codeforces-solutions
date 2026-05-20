#include <stdio.h>
#include <stdlib.h>

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    int ans[t];
    int temp = t;
    while (t--)
    {

        int a;
        scanf("%d", &a);
        int c0 = 0, c1 = 0, c2 = 0;

        for (int i = 0; i < a; i++)
        {
            int b;
            scanf("%d", &b);
            if (b == 0)
            {
                c0++;
            }
            else if (b == 1)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        };
        int res = c0;
        int pairs = min(c1, c2);
        res += pairs;
        c1 -= pairs;
        c2 -= pairs;

        res += c1 / 3;
        res += c2 / 3;
        ans[t] = res;
    }

    while(temp--) {
        printf("%d\n", ans[temp]);
    }
    return 0;
}