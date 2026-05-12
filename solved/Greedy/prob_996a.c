#include <stdio.h>
#define ll long long

int main()
{
    ll int money;
    ll count = 0;
    int bills[] = {100, 20, 10, 5, 1};
    int n = 5;
    scanf("%lld", &money);

    for (int i = 0; i < n; i++)
    {
        count += money / bills[i];
        money = money % bills[i];
    }
    printf("%lld", count);
    return 0;
}