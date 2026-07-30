#include <stdio.h>

int main()
{

    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("The character is a lowercase letter\n");
    }
    else
    {
        printf("The character is a uppercase letter\n");
    }
}