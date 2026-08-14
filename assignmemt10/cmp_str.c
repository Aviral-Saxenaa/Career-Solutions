#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "Aviral Saxena";
    char str2[20] = "Aviral Saxena";

    int res = strcmp(str, str2);
    if (res == 0)
    {
        printf("same");
    }
    else
    {
        printf("not same");
    }
}