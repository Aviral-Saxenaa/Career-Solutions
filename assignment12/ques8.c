#include <stdio.h>
#include <string.h>

// WAP to Calculate the Number of Words Present in a String
int main()
{
    char s[30];

    int words = 1;

    printf("Enter string: ");
    gets(s);

    // printf("string is %s", s);

    int i = 0;
    // int j = 0;
    // int count = 0;

    // char newstr[30];

    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            words++;
        }

        // j++;
        i++;
    }

    printf("total words are %d", words);

    return 0;
}