#include <stdio.h>

char *mystrupper(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }

    return str;
}

int main()
{
    char str[20] = "Aviral Saxena";

    mystrupper(str);
    printf("%s", str);
    return 0;
}
