#include <stdio.h>
#define ll long long

int main()
{
    ll t;
    scanf("%lld", &t);
    ll a[t][4];
    ll count[t];
    for (int i = 0; i < t; i++)
    {
        count[i] = 0;
        for (int j = 0; j < 4; j++)
        {
            scanf("%lld", &a[i][j]);
        }
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            if (a[i][j] > a[i][0])
            {
                count[i]++;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        printf("%lld\n", count[i]);
    }
    return 0;
}