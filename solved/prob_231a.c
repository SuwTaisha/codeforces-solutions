#include <stdio.h>

int prob_231() {
    int n;
    int count = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {

        int a,b,c;
        scanf("%d %d %d", &a,&b,&c);

        if(a+b+c >= 2) {
            count++;
        }
    }

    printf("%d", count);
}
