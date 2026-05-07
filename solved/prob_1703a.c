#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char a[n][4];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            a[i][j] = tolower(a[i][j]);
        }

        if (strcmp(a[i], "yes") == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}