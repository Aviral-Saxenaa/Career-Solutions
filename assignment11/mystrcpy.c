#include <stdio.h>

char *mystrcpy(char *dest, const char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
    return dest;
}

int main()
{
    char str[20] = "Aviral";
    char str2[20];

    mystrcpy(str2, str);
    printf("%s", str2);
    return 0;
}
