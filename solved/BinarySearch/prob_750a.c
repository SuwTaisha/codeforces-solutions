#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int time_remain = 240 - k;
    int left = 0;
    int right = n;
    int answer = 0;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        int time = 5 * ((mid * (mid + 1)) / 2);
        if (time <= time_remain)
        {
            left = mid + 1;
            answer = mid;
        }
        else
        {
            right = mid - 1;
        }
    }

    printf("%d", answer);
    return 0;
}