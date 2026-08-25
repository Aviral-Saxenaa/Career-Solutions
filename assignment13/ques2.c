#include <stdio.h>
#include <stdlib.h>

void readArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("enter no ");
        scanf("%d", &arr[i]);
    }
}

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
    int size;
    int x;
    int *arr;

    printf("enter size ");
    scanf("%d", &size);

    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        printf("memory allocation failed");
        return 1;
    }

    readArray(arr, size);

    printf("enter no to search ");
    scanf("%d", &x);

    int index = searchElement(arr, size, x);

    if (index != -1)
    {
        printf("found at pos %d", index + 1);
    }
    else
    {
        printf("not found");
    }

    free(arr);
    return 0;
}
