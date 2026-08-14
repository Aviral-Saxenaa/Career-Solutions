#include <stdio.h>

void reverseArray(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
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
    int arr[5] = {2, 1, 4, 3, 5};

    printf("Reversing array \n");
    reverseArray(arr, 5);
    printArray(arr, 5);

    return 0;
}
