#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    scanf("%s", name);
    int count[256] = {0};
    int distinct = 0;

    for (int i = 0; i < strlen(name); i++)
    {

        count[name[i]]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (count[i] > 0)
        {
            distinct++;
        }
    }

    if (distinct % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }

    return 0;
}