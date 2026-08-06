#include <stdio.h>

int findGreatest(int a, int b, int c)
{
    if (a >= b)
    {
        if (a >= c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else if (b >= c)
    {
        if (b >= a)
        {
            return b;
        }
        else
        {
            return a;
        }
    }
    return c;
}

int main(void)
{
    int a;
    int b;
    int c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Greatest number is %d\n", findGreatest(a, b, c));

    return 0;
}
