#include <stdio.h>

int main()
{
    int n = 5;
    int arr[5] = {2, 1, 4, 3, 5};

    printf("Reversing array \n");

    // int sum = 0;
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {

        printf("%d ", arr[i]);
    }
}