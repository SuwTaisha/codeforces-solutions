#include <stdio.h>

//

int main()
{
    int n, x;
    scanf("%d", &n);
    int a[n];

    int left = 0;
    int right = n - 1;
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (a[mid] == x)
        {
            found = mid;
            break;
        }
        else if (a[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    if (!found)
    {
        printf("%d", -1);
    }
    else
    {

        printf("%d", found);
    }
    return 0;
}