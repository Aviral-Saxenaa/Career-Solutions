#include <stdio.h>

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
    int arr[5] = {2, 1, 4, 3, 5};

    printAlternateNumbers(arr, 5);

    return 0;
}
