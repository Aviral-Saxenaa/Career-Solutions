#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    printf("enter string \n");
    scanf("%s", &str);

    int n = strlen(str);
    int flag = 0;

    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            flag = 1;
        }
    }
    (flag == 0) ? printf("palindrome") : printf("not pal");
}