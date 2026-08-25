#include <stdio.h>

char *mystrnstr(const char *str, const char *sub, int n)
{
    int i;
    int j;

    if (sub[0] == '\0')
    {
        return (char *)str;
    }

    for (i = 0; i < n && str[i] != '\0'; i++)
    {
        j = 0;
        while (i + j < n && str[i + j] != '\0' && sub[j] != '\0' && str[i + j] == sub[j])
        {
            j++;
        }

        if (sub[j] == '\0')
        {
            return (char *)(str + i);
        }
    }

    return NULL;
}

int main()
{
    char str[30] = "Aviral Saxena";
    char sub[10] = "Sax";

    if (mystrnstr(str, sub, 10) != NULL)
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }

    return 0;
}
