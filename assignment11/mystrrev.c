#include <stdio.h>

int mystrlen(const char *str)
{
    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    return len;
}

char *mystrrev(char *str)
{
    int start = 0;
    int end = mystrlen(str) - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    return str;
}

int main()
{
    char str[20] = "Aviral";

    mystrrev(str);
    printf("%s", str);
    return 0;
}
