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

void printAlternateNumbers(int arr[], int size)
{
    printf("Alternate numbers are \n");

    for (int i = 0; i < size; i += 2)
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
    printAlternateNumbers(arr, size);

    free(arr);
    return 0;
}
