#include <stdio.h>

int main()
{
    unsigned int t, b;
    scanf("%d", &t);
    b = t;
    int a[t];
    while (t--)
    {
        unsigned hour, min, hour_remain, min_remain;
        scanf("%d %d", &hour, &min);
        hour_remain = 24 - hour - 1;
        min_remain = 60 - min;

        if (hour_remain > 0)
        {
            min_remain += hour_remain * 60;
        }

        a[t] = min_remain;
    }

    while (b--)
    {
        printf("%d\n", a[b]);
    }
    return 0;
}