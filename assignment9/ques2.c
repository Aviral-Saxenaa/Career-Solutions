#include <stdio.h>

int searchElement(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[5] = {2, 1, 4, 3, 5};
    int x;

    printf("enter no to search ");
    scanf("%d", &x);

    int index = searchElement(arr, 5, x);

    if (index != -1)
    {
        printf("found at pos %d", index + 1);
    }
    else
    {
        printf("not found");
    }

    return 0;
}
