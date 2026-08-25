#include <stdio.h>
#include <stdio.h>

// every  space with spec char

int main()
{
    char s[30];

    printf("Enter string: ");
    gets(s);

    int i = 0;
    int count = 0;

    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            s[i] = '$';
        }

        i++;
    }

    printf("new string is %s", s);

    return 0;
}