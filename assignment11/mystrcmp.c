#include <stdio.h>

int mystrcmp(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }

        i++;
    }

    return str1[i] - str2[i];
}

int main()
{
    char str1[] = "AVIRAL";
    char str2[] = "AVIRAL";

    if (mystrcmp(str1, str2) == 0)
    {
        printf("Same");
    }
    else
    {
        printf("Not Same");
    }

    return 0;
}