#include <stdio.h>

int main()
{
    char str1[30], str2[30];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    int i = 0;
    int len1 = 0;
    int len2 = 0;

    // Find length of first string
    while (str1[i] != '\0')
    {
        len1++;
        i++;
    }

    i = 0;

    // Find length of second string
    while (str2[i] != '\0')
    {
        len2++;
        i++;
    }

    if (len1 > len2)
    {
        printf("Larger string is: %s", str1);
    }
    else if (len2 > len1)
    {
        printf("Larger string is: %s", str2);
    }
    else
    {
        printf("Both strings are of same length");
    }

    return 0;
}