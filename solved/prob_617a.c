#include <stdio.h>

int main()
{

    int x;
    scanf("%d", &x);

    int step_pattern[5] = {1, 2, 3, 4, 5};
    int count = 0;
    int i = 4;
    do
    {
        int temp = x;
        if (temp - step_pattern[i] > 0)
        {
            count++;
            x = temp - step_pattern[i];
            continue;
        }
        else if (temp - step_pattern[i] < 0)
        {
            i--;
            continue;
        }
        if (temp - step_pattern[i] == 0)
        {
            count++;
            x = temp - step_pattern[i];
            break;
        }

    } while (x > 0);
    printf("%d", count);
    return 0;
}