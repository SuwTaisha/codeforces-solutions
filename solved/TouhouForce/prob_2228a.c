#include <stdio.h>
#include <stdlib.h>

/*CANT SOLVE THIS :SOB:*/
int main()
{
    int t;
    scanf("%d", &t);
    int count[t];
    for (int i = 0; i < t; i++)
    {
        int a;
        int count_one = 0;
        int count_two = 0;
        count[i] = 0;
        scanf("%d", &a);
        int b[a];
        for (int j = 0; j < a; j++)
        {
            scanf("%d", &b[j]);
            if (b[j] == 0)
            {
                count[i]++;
                continue;
            }
            if (b[j] == 1)
            {
                count_one++;
            }
            else
            {
                count_two++;
            }
        }

        if (count_one >= 3)
        {
            count[i] += count_one / 3;
            count_one -= count_one / 3;
        }
        if (count_two >= 6)
        {
            count[i] += count_two / 6;
            count_two -= count_two / 6;
        }

        if (count_one < count_two)
        {
            count[i] += count_one;
        }
        else
        {
            count[i] += count_two;
        }
    };

    for (int i = 0; i < t; i++)
    {
        printf("%d\n", count[i]);
    }
    return 0;
}