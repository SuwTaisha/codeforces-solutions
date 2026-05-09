#include <stdio.h>

int main()
{

    int n, i, j;
    scanf("%d", &n);
    int a[n][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        int max = a[i][0];
        int sum = 0;
        for (j = 0; j < 7; j++)
        {
            sum -= a[i][j];
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
        sum += (max*2);
        printf("%d\n", sum);
    }
    return 0;
}