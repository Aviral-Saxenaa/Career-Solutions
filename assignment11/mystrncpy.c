#include <stdio.h>

char *mystrncpy(char *dest, const char *src, int n)
{
    int i = 0;

    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}

int main()
{
    char str1[20] = "Aviral";
    char str2[20];

    mystrncpy(str2, str1, 4);
    str2[4] = '\0';
    printf("%s", str2);
    return 0;
}
