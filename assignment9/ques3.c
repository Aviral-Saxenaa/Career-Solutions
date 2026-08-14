#include <stdio.h>

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
    int arr[5] = {2, 1, 4, 3, 5};

    printf("Sum is %d", findSum(arr, 5));

    return 0;
}
