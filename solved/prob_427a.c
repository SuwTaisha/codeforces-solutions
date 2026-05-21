#include <stdio.h>

int main()
{
    unsigned int t;
    unsigned int crime_passed = 0;
    unsigned int cops = 0;

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int crimes = 0;
        int a;
        scanf("%d", &a);
        if (a == -1)
        {
            crimes++;
            if (cops >= crimes)
            {
                cops -= crimes;
                crimes = 0;
            }
            else
            {
                crime_passed++;
            }
        }
        if (a >= 0)
        {
            cops += a;
        }
    }

    printf("%d", crime_passed);

    return 0;
}