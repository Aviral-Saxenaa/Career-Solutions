#include <stdio.h>

int main()
{
    int arr[5] = {2, 1, 4, 3, 5};

    printf("enter no to search ");
    int x;
    scanf("%d", &x);

    int flag = 0;
    int ans = -1;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == x)
        {
            ans = i;
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("found at pos %d", ans + 1);
    }
    else
    {
        printf("not found");
    }
}