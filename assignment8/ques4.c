#include <stdio.h>

int main()
{
    int arr[5] = {2, 1, 4, 3, 5};

    printf("Odd no are \n");

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\nEven no are \n");

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}