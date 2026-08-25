#include <stdio.h>

char *mystrrchr(const char *str, char ch)
{
    int i = 0;
    char *last = NULL;

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            last = (char *)(str + i);
        }
        i++;
    }

    if (ch == '\0')
    {
        return (char *)(str + i);
    }

    return last;
}

int main()
{
    char str[20] = "programming";

    if (mystrrchr(str, 'm') != NULL)
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }

    return 0;
}
