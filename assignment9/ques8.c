#include <stdio.h>

void readArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("enter no ");
        scanf("%d", &arr[i]);
    }
}

void mergeArrays(int arr1[], int arr2[], int arr3[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr3[i] = arr1[i];
    }

    for (int i = 0; i < size; i++)
    {
        arr3[size + i] = arr2[i];
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

    printf("enter size\n");
    scanf("%d", &n);

    int arr1[n];
    int arr2[n];
    int arr3[2 * n];

    printf("enter 1st array \n");
    readArray(arr1, n);

    printf("\nenter 2nd array \n");
    readArray(arr2, n);

    mergeArrays(arr1, arr2, arr3, n);

    printf("\nMerged array is : \n");
    printArray(arr3, 2 * n);

    return 0;
}
