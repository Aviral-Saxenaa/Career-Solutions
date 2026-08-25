#include <stdio.h>

int mystrncmp(const char *str1, const char *str2, int n)
{
    int i = 0;

    while (i < n)
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }

        if (str1[i] == '\0' || str2[i] == '\0')
        {
            break;
        }

        i++;
    }

    return 0;
}

int main()
{
    char str1[20] = "Aviral";
    char str2[20] = "Avians";

    if (mystrncmp(str1, str2, 3) == 0)
    {
        printf("same");
    }
    else
    {
        printf("not same");
    }

    return 0;
}
