#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "Aviral Saxena";
    char str2[20];

    char *p = strchr(str, 'z');

    if (p == NULL)
    {
        printf("not found");
    }
    else
    {
        printf("found");
    }
}