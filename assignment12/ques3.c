#include <stdio.h>
#include <conio.h>
#include <string.h>

// remove ith char

int main()
{
    char s[30];
    printf("enter string\n");
    scanf("%s", &s);
    int n;
    printf("\nenter ith index\n");
    scanf("%d", &n);
    printf("old string is %s", s);
    int x = strlen(s);

    int i = 0;
    while (s[i] != '\0' && i != n)
    {

        i++;
    }

    for (int i = n; i < x; i++)
    {
        s[i] = s[i + 1];
    }

    printf("new string is %s", s);
}