#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int a[3];
    int n = sizeof(a) / sizeof(a[0]);
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(a[0]), comp);

    count += a[2] - a[1];
    count += a[1] - a[0];

    printf("%d", count);
    return 0;
}