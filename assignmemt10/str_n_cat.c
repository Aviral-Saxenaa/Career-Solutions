#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "Aviral Saxena";
    char str2[20] = " world";

    strncat(str , str2 , 3); // only 3 char copy
    printf("%s",str);
}