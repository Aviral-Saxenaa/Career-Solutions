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

int findSum(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
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
    printf("Sum is %d", findSum(arr, size));

    free(arr);
    return 0;
}
