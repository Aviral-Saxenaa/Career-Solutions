#include <stdio.h>

int main()
{

    int no;
    printf("Enter a number: ");
    scanf("%d", &no);
    int flag = 0;

    for (int i = 2; i < no; i++)
    {
        if (no % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is a prime number", no);
    }
    else
    {
        printf("%d is not a prime number", no);
    }
}