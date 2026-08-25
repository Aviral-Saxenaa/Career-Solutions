#include <stdio.h>

char to_lower_char(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    return ch;
}

int mystrncasecmp(const char *str1, const char *str2, int n)
{
    int i = 0;

    while (i < n)
    {
        char ch1 = to_lower_char(str1[i]);
        char ch2 = to_lower_char(str2[i]);

        if (ch1 != ch2)
        {
            return ch1 - ch2;
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
    char str1[20] = "AVIRAL";
    char str2[20] = "aviraj";

    if (mystrncasecmp(str1, str2, 5) == 0)
    {
        printf("same");
    }
    else
    {
        printf("not same");
    }

    return 0;
}
