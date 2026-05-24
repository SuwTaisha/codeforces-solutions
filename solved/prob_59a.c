#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char word[101];
    int lower = 0, upper = 0;
    scanf("%s", word);
    for (int i = 0; i < strlen(word); i++)
    {
        if (isupper(word[i]))
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }

    if (upper > lower)
    {
        for (int i = 0; i < strlen(word); i++)
        {
            word[i] = toupper(word[i]);
        }
    }
    else
    {
        for (int i = 0; i < strlen(word); i++)
        {
            word[i] = tolower(word[i]);
        }
    }
    printf("%s", word);
    return 0;
}