#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "Aviral Saxena";
    char str2[20];

    strrev(str);
    printf("%s\n", str);

    strcpy(str2, str);
    printf("%s", str2);
}