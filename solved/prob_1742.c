#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][3];


    for(int i = 0; i < n; i++ ) {
        scanf("%d%d%d", &a[i][0], &a[i][1], &a[i][2]);
    }

    for (int i = 0; i < n; i++)
    {


        int x = a[i][0];
        int y = a[i][1];
        int z = a[i][2];
        
        int sum_a = x + y;
        int sum_b = y + z;
        int sum_c = z + x;
        if(sum_a == z || sum_b == x || sum_c == y) {
            printf("%s\n", "YES");
        } else {
            printf("%s\n", "NO");
        }
    }
    return 0;
}