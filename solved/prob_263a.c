#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n[5][5];
    int x = 0;
    int y = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &n[i][j]);
            if (n[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    printf("%d", abs(x - 2) + abs(y - 2));
}
