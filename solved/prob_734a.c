#include <stdio.h>

int main()
{
    int n;
    int count_a = 0;
    int count_b = 0;
    scanf("%d", &n);
    char c[n + 1];
    for (int i = 0; i <= n; i++)
    {
        scanf("%c", &c[i]);
    }
    for (int i = 0; c[i] != '\0'; i++)
    {

        if (c[i] == 'A')
        {
            count_a++;
        }
        else if (c[i] == 'D')
        {
            count_b++;
        }
    }

    if (count_a > count_b)
    {
        printf("%s", "Anton");
    }
    else if (count_b > count_a)
    {
        printf("%s", "Danik");
    }
    else
    {
        printf("Friendship");
    }
}