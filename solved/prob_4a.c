#include <stdio.h>
int prob_4a()
{
    int n;
    scanf("%d", &n);
    if(n > 2 && n % 2 == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
