#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    printf("enter string \n");
    scanf("%s", &str);

    char ch;

    printf("enter char\n");
    scanf(" %c", &ch);

    int i = 0;
    int flag = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            flag = 1;
            printf("found at pos %d", i + 1);
        }
        i++;
    }
    if (flag == 0)
    {
        printf("not found");
    }
}