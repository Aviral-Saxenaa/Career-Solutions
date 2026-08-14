#include <stdio.h>

void printOddNumbers(int arr[], int size)
{
    printf("Odd no are \n");

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
}

void printEvenNumbers(int arr[], int size)
{
    printf("\nEven no are \n");

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}

int main()
{
    int arr[5] = {2, 1, 4, 3, 5};

    printOddNumbers(arr, 5);
    printEvenNumbers(arr, 5);

    return 0;
}
