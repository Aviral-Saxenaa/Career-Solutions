#include <stdio.h>
#include <conio.h>

int main()
{
    char s[30];
    printf("enter string\n");
    scanf("%s", &s);
    printf("old string is %s", s);

    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == 'a')
        {
            s[i] = '$';
        }
        i++;
    }

    printf("new string is %s", s);
}