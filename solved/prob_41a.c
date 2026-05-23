#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int left = 0;
    int right = strlen(str) - 1;
    while (left < right) {
        char temp = str[left];
        str[left]  = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char word[100];
    char word_2[100];

    scanf("%99s", word);
    scanf("%99s", word_2);

    reverse(word);

    if (strcmp(word, word_2) == 0) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}