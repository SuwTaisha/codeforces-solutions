#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int n;
    scanf("%d", &n);
    int coin[n];
    int total = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &coin[i]);
        total += coin[i];
    }

    qsort(coin, n, sizeof(coin[0]), comp);

    int sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        sum += coin[i];
        count++;
        if (sum > total - sum) {  
            printf("%d", count);
            return 0;
        }
    }

    return 0;
}