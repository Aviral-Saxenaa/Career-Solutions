#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "Aviral Saxena ";
    char str2[20] = "yooy";

    strcat(str, str2);
    printf("%s", str);
}