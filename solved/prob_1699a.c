#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int rating[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &rating[i]);
    }

    for (int i = 0; i < t; i++)
    {
        if (rating[i] <= 1399)
        {
            printf("Division 4\n");
        }
        else if (rating[i] > 1399 && rating[i] <= 1599)
        {
            printf("Division 3\n");
        }
        else if (rating[i] <= 1899 && rating[i] > 1599)
        {
            printf("Division 2\n");
        }
        else if (rating[i] >= 1900)
        {
            printf("Division 1\n");
        }
    }

    return 0;
}