#include <stdio.h>
#include <conio.h>
#include <string.h>

// remove ith char

int main()
{
    char s[30];
    printf("enter string\n");
    scanf("%s", &s);

    printf("old string is %s", s);
    int x = strlen(s);

    char temp = s[0];
    s[0] = s[x - 1];
    s[x - 1] = temp;
    // swap(s[0], s[x - 1]);

    printf("new string is %s", s);
}