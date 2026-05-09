#include <stdio.h>

int main()
{
    int a, b, c;
    int total = 0;
    scanf("%d%d%d", &a, &b, &c);
    for (int i = 1; i <= c; i++)
    {
        total += i * a;
    }

    if (total - b < 0)
    {
        printf("%d", 0);
    }
    else
    {
        printf("%d", total - b);
    }
}