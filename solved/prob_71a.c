#include <stdio.h>

int prob_71a() {
    int n;
    scanf("%d", &n);

    char words[n][100];
    int count[n];

    for (int i = 0; i < n; i++) {
        int j = 0;
        scanf("%s", words[i]);

        count[i] = 0;
        while(words[i][j] != '\0') {
            j++;

        };
        count[i] = j;
    }

    for (int i = 0; i < n; i++) {
        if(count[i] > 10) {
            char first = words[i][0];
            char last = words[i][count[i] - 1];
            int length = count[i] - 2;
            printf("%c%d%c\n", first,length,last);
        } else {
            printf("%s\n", words[i]);
        }

    }


    return 0;
}
