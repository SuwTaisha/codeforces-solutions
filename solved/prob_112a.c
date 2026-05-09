#include <stdio.h>
#include <ctype.h>

int main()
{
    char a[100];
    char b[100];

    scanf("%s", &a);
    scanf("%s", &b);

    for (int i = 0; a[i] != '\0'; i++)
    {
        a[i] = tolower(a[i]);
    }

    for (int i = 0; b[i] != '\0'; i++)
    {
        b[i] = tolower(b[i]);
    }

    for (int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] > b[i]) {
            printf("%d",1);
            return 0;
        } else if(a[i] < b[i]){
            printf("%d", -1);
            return 0;
        } 
    }
    printf("%d", 0);
    return 0;
}
