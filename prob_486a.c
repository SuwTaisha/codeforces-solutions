#include <stdio.h>
#define ll long long

int main()
{
    ll n;
    ll result;
    scanf("%lld", &n);

    if (n % 2 == 0)
    {
        result = n / 2;
    }
    else
    {
        result = -((n + 1) / 2);
    }
    printf("%lld", result);
}