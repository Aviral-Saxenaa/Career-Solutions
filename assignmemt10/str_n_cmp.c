#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "Aviral Saxena";
    char str2[20] = "Avi";

    int p = strncmp(str, str2, 3);

    if (p == 0)
        printf("same");
    else
        printf("not same");
}