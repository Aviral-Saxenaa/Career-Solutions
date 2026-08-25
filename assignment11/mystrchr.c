#include <stdio.h>

char *mystrchr(char str[], char ch)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            return &str[i];
        }

        i++;
    }

    return NULL;
}

int main()
{
    char str[] = "Aviral";

    char *result = mystrchr(str, 'r');

    if (result != NULL)
    {
        printf("Found");
    }
    else
    {
        printf("Not Found");
    }

    return 0;
}