#include <stdio.h>

int main()
{
    char s[30];

    printf("Enter string: ");
    scanf("%s", s);

    int i = 0;
    int count = 0;

    while (s[i] != '\0')
    {
        if (s[i] == 'a' || s[i] == 'A' ||
            s[i] == 'e' || s[i] == 'E' ||
            s[i] == 'i' || s[i] == 'I' ||
            s[i] == 'o' || s[i] == 'O' ||
            s[i] == 'u' || s[i] == 'U')
        {
            count++;
        }

        i++;
    }

    printf("Total vowels are %d", count);

    return 0;
}