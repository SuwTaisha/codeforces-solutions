#include <stdio.h>

int main()
{
    int n, h;
    scanf("%d%d", &n, &h);
    int width = 0;
    for (int i = 0; i < n; i++)
    {
        int person;
        scanf("%d", &person);
        if (person > h)
        {
            width += 2;
        }
        else
        {
            width++;
        }
    }

    printf("%d", width);
    return 0;
}