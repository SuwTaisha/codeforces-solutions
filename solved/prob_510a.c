#include <stdio.h>

int main()
{
    int n, m;
    int flag = 1;

    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                if (flag == 1 && j == m - 1)
                {
                    printf("#");
                }
                else if (flag == 0 && j == 0)
                {
                    printf("#");
                }
                else
                {
                    printf(".");
                }
            }

            flag = !flag;
        }

        printf("\n");
    }
}