#include <stdio.h>
#define ll long long

int main()
{
    ll int a, b, odd;
    scanf("%lld %lld", &a, &b);
    odd = (a + 1) / 2;

    if (b <= odd)
    {
        printf("%lld", (b * 2) - 1);
    }
    else
    {
        printf("%lld", 2 * (b - odd));
    }
    return 0;
}