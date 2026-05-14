#include <stdio.h>

int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);

    while (n--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (b - a >= 2) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}