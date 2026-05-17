#include <stdio.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d", &n);
    char a[n + 1];
    scanf("%s", &a);

    int flag = 1;
    int count[256];

    for (int i = 0; i < 256; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; a[i] != '\0'; i++)
    {
        char lwr = tolower(a[i]);
        count[lwr] = 0;
        count[lwr]++;
    }
    for (int i = 97; i <= 122; i++)
    {
        if (count[i] <= 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}