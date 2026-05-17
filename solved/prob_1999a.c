#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int result[t];
    for (int i = 0; i < t; i++)
    {
        int a, left, right;
        scanf("%d", &a);
        left = a % 10;
        right = a / 10;
        result[i] = left + right;
    }

    for(int i = 0; i < t;i++) {
        printf("%d\n", result[i]);
    }
    return 0;
}