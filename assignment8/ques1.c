#include <stdio.h>

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("enter no ");
        scanf("%d", &arr[i]);
    }

    int mini = 1e8;
    int maxi = -1e8;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }

    printf("The max is %d and min is %d", maxi, mini);
}