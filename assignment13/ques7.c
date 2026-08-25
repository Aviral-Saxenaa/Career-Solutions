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

void sumArrays(int arr1[], int arr2[], int arr3[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
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
    int n;
    int *arr1;
    int *arr2;
    int *arr3;

    printf("enter size\n");
    scanf("%d", &n);

    arr1 = (int *)malloc(n * sizeof(int));
    arr2 = (int *)malloc(n * sizeof(int));
    arr3 = (int *)malloc(n * sizeof(int));

    if (arr1 == NULL || arr2 == NULL || arr3 == NULL)
    {
        printf("memory allocation failed");
        free(arr1);
        free(arr2);
        free(arr3);
        return 1;
    }

    printf("enter 1st array \n");
    readArray(arr1, n);

    printf("\nenter 2nd array \n");
    readArray(arr2, n);

    sumArrays(arr1, arr2, arr3, n);

    printf("\nSum array is : \n");
    printArray(arr3, n);

    free(arr1);
    free(arr2);
    free(arr3);
    return 0;
}
