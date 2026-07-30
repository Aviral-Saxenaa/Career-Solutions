#include <stdio.h>
#include <ctype.h>

int main()
{

    char ch = 'a';

    char lower = tolower(ch);

    if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
    {
        printf("The character is a vowel\n");
    }
    else
    {
        printf("The character is a consonant\n");
    }
}