#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "Aviral Saxena";
    char str2[20];

    strncpy(str2, str , 4);

    printf("%s",str2);
}