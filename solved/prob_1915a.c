#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int a[t][100];

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == a[i][j + 1] && a[i][j + 1] != a[i][j + 2])
            {
                printf("%d\n", a[i][j + 2]);
                break;
            }
            else if (a[i][j] != a[i][j + 1] && a[i][j + 1] == a[i][j + 2])
            {
                printf("%d\n", a[i][j]);
                break;
            }
            else
            {
                printf("%d\n", a[i][j + 1]);
                break;
            }
        }
    }
}
