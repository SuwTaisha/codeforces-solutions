#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int n[t];
    int count[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n[i]);
        count[i] = 0;
    }

    for (int i = 0; i < t; i++)
    {

        for (int j = 1; j < n[i]; j++)
        {
            for (int k = j; k < n[i]; k++)
            {
                if (k + j == n[i])
                {
                    if (k != j)
                    {
                        count[i] += 2;
                        continue;
                    }
                    count[i]++;
                }
            }
        }
    }

    for (int i = 0; i < t; i++)
    {
        printf("%d\n", count[i]);
    }
}