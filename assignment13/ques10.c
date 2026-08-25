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

void sortArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int size;
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

    printf("Sorted array: \n");
    sortArray(arr, size);
    printArray(arr, size);

    free(arr);
    return 0;
}
