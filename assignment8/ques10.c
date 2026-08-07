// sort the array

#include <stdio.h>

int main()
{
    int n = 5;
    int arr[5] = {2, 1, 4, 3, 5};

    printf("Sorted array: \n");

    // int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}