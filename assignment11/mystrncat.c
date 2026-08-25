#include <stdio.h>

char *mystrncat(char *dest, const char *src, int n)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }

    while (src[j] != '\0' && j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';
    return dest;
}

int main()
{
    char str1[30] = "Hello ";
    char str2[20] = "World";

    mystrncat(str1, str2, 3);
    printf("%s", str1);
    return 0;
}
