#include <stdio.h>
#include <string.h>

// WAP to Remove the Characters of Odd Index Values in a String
int main()
{
    char s[30];

    printf("Enter string: ");
    scanf("%s", s);

    int i = 0;
    int j = 0;
    // int count = 0;

    char newstr[30];

    while (s[i] != '\0')
    {
        if (i % 2 == 0)
        {
            newstr[j] = s[i];
        }

        j++;
        i++;
    }

    printf("New string is %s", newstr);

    return 0;
}