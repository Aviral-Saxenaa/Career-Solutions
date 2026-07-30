#include <stdio.h>

int main()
{
    printf("enter the no!\n");
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}